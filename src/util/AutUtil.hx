package util;
import haxe.ds.Either;
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

    public static var daStringRoute:Map<String, Array<String>> = new Map();
    public static var daAltF:Array<String> = [];
    public static var daMinAltRoute:Map<String, Array<String>> = new Map();
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
        routeData=data.substring(data.toLowerCase().indexOf("{0>"), data.indexOf("}", data.toLowerCase().indexOf("{0>"))).replace("{", "").replace("\n", "");

        daSigma=sigma.split(",");
        for(value in daSigma)
        {
            trace("value of sigma: "+value);
            if(value.length == 1)
                {mustFormat = true;trace("Must Format this");}
        }

        daF=dataF.split(",");
        daRoute = new Map();
        daStringRoute = new Map();
        daMinAltRoute = new Map();
        daAltF = [];
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
        routeData=data.substring(data.toLowerCase().indexOf("{0>"), data.indexOf("}", data.toLowerCase().indexOf("{0>"))).replace("{", "").replace("\n", "");

        daSigma=sigma.split(",");
        daF=dataF.split(",");
        daStringRoute = new Map();
        daMinAltRoute = new Map();
        //daRoute = new Map();

        for(route in routeData.split(","))
        {
            var localRoute:Array<String> = route.split(">");
            var localArray:Array<String> = [];
            for(subRoute in localRoute[1].split("|"))
            {
                final finalRoute:String = subRoute;
                localArray.push(finalRoute);  
            }
            trace(Std.parseInt(localRoute[0]) + ":" + localArray);
            //daRoute.set(Std.parseInt(localRoute[0]), localArray);
            daStringRoute.set(""+Std.parseInt(localRoute[0]), localArray);
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
        if(daAltF.length > 0)
            return false;

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
                //trace("No cheking that dog+++");
                return true;
            }
        }
        return false;
    }

    public static function minimizeAFD() 
    {
        trace("Minimizing");
        if(daAltF.length > 0)
            doMin(daStringRoute);
        else
            doMin(daRoute);

        return;
    }
    private static function doMin(route:OneOf<Map<Int, Array<Int>>, Map<String, Array<String>>>)
    {
        daMinRoute = new Map();
        var localSigma:Array<Array<String>> = create_any_Matrix(2, 1, "");
        var localF = daF;
        var localRoute:Map<String, Array<String>> = new Map();
        var isFromTranform = false;
        var endGroups;

        switch(route)
        {
            case Right(r):
                for(key=>value in r)
                    localRoute.set(key, value);
                 
            case Left(l):
                for(key=>value in l)
                    localRoute.set(""+key, [value.toString()]);
        }
        if(daAltF.length > 0)
        {
            localF = daAltF;
            localRoute = daStringRoute;
            isFromTranform = true;
        }

        for(f in localF)
            localSigma[0].insert(localF.indexOf(f), f);

        var ups:Int = 0;
        for(route=>content in localRoute)
        {
            localSigma[1].insert(ups, ""+route);
            ups++;
        }

        trace("Is from transform " + isFromTranform);
        endGroups = iterateGroups(localSigma, isFromTranform);
        for(group in endGroups)
            {
                for(state in group)
                {
                    if(isFromTranform)
                        daMinAltRoute.set(state, daStringRoute.get(state));
                    else
                        daMinRoute.set(Std.parseInt(state), daRoute.get(Std.parseInt(state)) != null ? daRoute.get(Std.parseInt(state)) : [-1]);

                    break;
                }
            }

        return;
    }
    private static function iterateGroups(groups:Array<Array<String>>, ?isTrans:Bool = false):Array<Array<String>>
    {
        var flag:Int = 0;
        var newGroups = groups;
        trace(newGroups);
        for(group in groups)
        {
            if(group.length <= 1)
                continue;

            for(state in group)
            {
                for(element in daSigma)
                {
                    if(isFromOtherGroup(flag, groups, state, element, isTrans))
                    {
                        newGroups.push([]);
                        newGroups[groups.length-1].push(state);
                        newGroups[flag].remove(state);
                    }
                }
                
            }
            flag++;
        }
        trace(newGroups);
        if(groups != newGroups)
        {
            newGroups = iterateGroups(newGroups, isTrans);
        }
        trace(newGroups);
        return newGroups;
    }
    private static function isFromOtherGroup(curIdx:Int, groups:Array<Array<String>>, state:String, element:String, isTrans:Bool):Bool
    {
        if(state == "")
            return false;
        
        for(i in 0...groups.length)
        {
            if(i == curIdx)
                continue;

            if(!isTrans)
                return groups[i].contains(""+daRoute.get(Std.parseInt(state))[daSigma.indexOf(element)])
            else
            {
                return groups[i].contains(daStringRoute.get(state)[daSigma.indexOf(element)]);
            }
        }
        trace("xd");
        return false;
    }

    public static function fromAFND_toAFD(path:String) 
    {
        getAutomatonEx(path);//start

        trace("Tracing stringMap");
        traceMap(daStringRoute);

        var localMap:Map<String, Array<String>> = new Map();
        localMap.set("0" ,daStringRoute.get("0"));
        //traceMap(localMap);
        createNewAFD("0", localMap);
        for(state=>nextState in localMap)
        {
            for(val in state.split(""))
            {
                if(daF.contains(val))
                {
                    daAltF.push(state);
                    break;
                }
            }
        }
        localMap.remove("");
        traceMap(localMap);
        daStringRoute = localMap;

        return;
    }

    private static function createNewAFD(q0:String, daAfd:Map<String, Array<String>>)
    {
        if(!daAfd.exists(q0))
            return;

        trace("Starting in " + q0);
        var nextStates:Array<String> = [];
        for(element in daSigma)
        {
            var curStates:String = daAfd.get(q0)[daSigma.indexOf(element)];
            var nextStates_values:Array<String> = [];

            curStates = curStates.replace("NULL", "");
            if(curStates == "" || curStates == null)
                nextStates_values.insert(daSigma.indexOf(element), "NULL");

            trace("Gonna move in " + curStates + " with sigma " + element);
            var localVal:String = "";
            for(state in curStates.split(""))
            {
                if(isEndOfRoute(Std.parseInt(state)))
                {
                    trace("Is end of route");
                    continue;
                }
                trace("Gonna concat from: "+ state +":"+ daStringRoute.get(state));

                localVal+=daStringRoute.get(state)[daSigma.indexOf(element)];
                
                nextStates_values.insert(daSigma.indexOf(element), localVal);
                //nextStates_values.remove("NULL");
            }
            if(!daAfd.exists(curStates))
            {
                trace("Added " + curStates + " With Value: " + nextStates_values);
                nextStates.push(curStates);
                daAfd.set(curStates, nextStates_values);
            }
        }
        for(state in nextStates)
        {
            createNewAFD(state, daAfd);
        }
        return;
    }

    private static function traceMap(map:Map<Dynamic, Array<Dynamic>>)
    {
        trace("Tracing new Map...");
        for(key=>value in map)
            trace(key + " -> " + value);
    }

    public static inline function boolToInt(v:Bool):Int{ return v == true ? 1 : 0;}

    public static function create_any_Matrix(rows:Int , ?columns:Int = 0, ?value:Dynamic = 0):Dynamic
    {
        if(rows <= 1)
            return null;

        var mat = [];
        for (i in 0...rows)
        {
            if(columns < 1)
                mat[i] = value;
            else
            {
                mat[i] = [];
                for (j in 0...columns)
                    mat[i][j] = value;
            }
        }
        return mat;
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

abstract OneOf<A, B>(Either<A, B>) from Either<A, B> to Either<A, B> {
    @:from inline static function fromA<A, B>(a:A):OneOf<A, B> {
      return Left(a);
    }
    @:from inline static function fromB<A, B>(b:B):OneOf<A, B> {
      return Right(b);  
    } 
      
    @:to inline function toA():Null<A> return switch(this) {
      case Left(a): a; 
      default: null;
    }
    @:to inline function toB():Null<B> return switch(this) {
      case Right(b): b;
      default: null;
    }
  }