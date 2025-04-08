package util;
import haxe.ds.Map;
import haxe.io.Path;
import haxe.ui.data.DataSourceFactory;
import haxe.ui.notifications.NotificationManager;
import haxe.ui.notifications.NotificationType;
import openfl.utils.Object;

using StringTools;
#if sys
import sys.FileSystem;
import sys.io.File;
#end

class AutUtil {
    public static var sigma:String;
    public static var dataF:String;
    public static var routeData:String;

    public static var daSigma:Array<String>;
    public static var daF:Array<String>;
    public static var daRoute:Map<Int, Array<Int>> = new Map();

    public static var daMinRoute:Map<Int, Array<Int>> = new Map();
    //Hacer esto mapa
    static var mustFormat:Bool = false;
    public static function getAutomaton(path:String)
    {
        var data:String;
        var daFile:Array<String>;
        #if sys
        if(!FileSystem.exists(path))
            return;

        data=File.getContent(path).replace(" ", "");
        daFile = data.split("\n");
        sigma=data.substring(data.toLowerCase().indexOf("sig{"), data.indexOf("}", data.toLowerCase().indexOf("sig{"))).replace("Sig{", "").replace("sig{", "");
        dataF=data.substring(data.toLowerCase().indexOf("f{"), data.indexOf("}", data.toLowerCase().indexOf("f{"))).replace("F{", "").replace("f{", "");
        routeData=data.substring(data.toLowerCase().indexOf("{0>"), data.indexOf("}", data.toLowerCase().indexOf("{0>"))).replace("{", "");

        daSigma=sigma.split(",");
        for(value in daSigma)
        {
            trace("value of sigma: "+value);
            if(value.length == 1)
                {mustFormat = true;trace("Must Format this");}
        }

        daF=dataF.split(",");
        daRoute = new Map();
        for(route in routeData.split(","))
        {
            var localRoute:Array<String> = route.split(">");
            var localArray:Array<Int> = [];
            for(subRoute in localRoute[1].split("|"))
            {
                
                if(mustFormat)
                {
                    for(value in subRoute.split(""))
                    {
                        var finalRoute:Int = Std.parseInt(value) != null ? Std.parseInt(value) : -1;
                        localArray.push(finalRoute);
                    }
                    
                }
                else
                {
                    final finalRoute:Int = Std.parseInt(subRoute) != null ? Std.parseInt(subRoute) : -1;
                    localArray.push(finalRoute);
                }
                    
            }
            trace(Std.parseInt(localRoute[0]) + ":" + localArray);
            daRoute.set(Std.parseInt(localRoute[0]), localArray);
        }
        
        #end
        return;
    }
    private static function getAutomatonEx(path:String)
    {
        var data:String;
        var daFile:Array<String>;
        #if sys
        if(!FileSystem.exists(path))
            return;

        data=File.getContent(path).replace(" ", "");
        daFile = data.split("\n");
        sigma=data.substring(data.toLowerCase().indexOf("sig{"), data.indexOf("}", data.toLowerCase().indexOf("sig{"))).replace("Sig{", "").replace("sig{", "");
        dataF=data.substring(data.toLowerCase().indexOf("f{"), data.indexOf("}", data.toLowerCase().indexOf("f{"))).replace("F{", "").replace("f{", "");
        routeData=data.substring(data.toLowerCase().indexOf("{0>"), data.indexOf("}", data.toLowerCase().indexOf("{0>"))).replace("{", "");

        daSigma=sigma.split(",");
        daF=dataF.split(",");
        daRoute = new Map();

        for(route in routeData.split(","))
        {
            var localRoute:Array<String> = route.split(">");
            var localArray:Array<Int> = [];
            for(subRoute in localRoute[1].split("|"))
            {
                final finalRoute:Int = Std.parseInt(subRoute) != null ? Std.parseInt(subRoute) : -1;
                localArray.push(finalRoute);  
            }
            trace(Std.parseInt(localRoute[0]) + ":" + localArray);
            daRoute.set(Std.parseInt(localRoute[0]), localArray);
        }
        
        #end
        return;
    }
    /**
        @return True if the automaton is Finite Non Deterministic \\
        False if otherwise
    **/
    public static function checkAutomaton():Bool
    {

        var routeConst:Int = 0;
        for(start=>route in daRoute)
        {
            var shouldSkip:Bool = isEndOfRoute(start);
            if(shouldSkip)continue;

            routeConst = route.length;
            break;
        }
            
        for(start=>route in daRoute)
        {
            var shouldSkip:Bool = isEndOfRoute(start);
            if(shouldSkip)continue;
                    
            if(routeConst != route.length)
            {
                trace("lenght is different: " + routeConst + " != " + route.length);
                return true;
            }

            if(route.contains(-1))
            {
                trace("there is a null value: " + route);
                return true;
            }
        }
        return false;
    }
    private static function isEndOfRoute(state:Int)
    {
        for(element in daF)
        {
            if(""+state == element)
            {
                trace("No cheking that dog+++");
                return true;
            }
        }
        return false;
    }

    public static function minimizeAFD() 
    {
        if(checkAutomaton())
        {
            NotificationManager.instance.addNotification({
                title: "No se puede Minimizar",
                body: "Su automata es Finito No Determinista",
                type: NotificationType.Error
            });
            return;
        }
           
    }

    public static function fromAFND_toAFD(path:String) 
    {
        getAutomatonEx(path);//start
        
        
        getAutomaton(path); //end
        return;
    }


    public static function doRoute(input:String) 
    {
        var userPath:Array<String> = input.split("");
        var finalRoute:String = "";
        var curState = 0;
        var idx:Int = 0;
        for(path in userPath)
        {
            final pathInt:Int = Std.parseInt(path);
            finalRoute += daRoute.get(curState)[daSigma.indexOf(path)];

            if(idx < userPath.length-1)
                finalRoute+= "->";
            else 
                finalRoute+= ";";

            if(idx % 3 == 0 && idx > 0)
                finalRoute +="\n";

            idx++;
        }
        trace(finalRoute);
    }
}