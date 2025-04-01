package util;
import haxe.ds.Map;
import haxe.io.Path;
import haxe.ui.data.DataSourceFactory;

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
    /**
        @return True if the automaton is Finite Non Deterministic \\
        False if otherwise
    **/
    public static function checkAutomaton():Bool
    {
        if(mustFormat)
            return true;

        for(start=>route in daRoute)
        {
            if(route.contains(-1))
                return true;
        }
        return false;
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