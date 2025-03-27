package util;
#if sys
import sys.FileSystem;
import sys.io.File;
#end
import haxe.ds.Map;

using StringTools;

class AutUtil {
    public static var sigma:String;
    public static var dataF:String;
    public static var routeData:String;

    public static var daSigma:Array<String>;
    public static var daF:Array<String>;
    public static var daRoute:Map<Int, Array<Int>> = new Map();
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
        daF=dataF.split(",");
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
        for(start=>route in daRoute)
        {
            if(route.contains(-1))
                return true;
        }
        return false;
    }
}