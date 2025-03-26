package util;
#if sys
import sys.FileSystem;
import sys.io.File;
#end
using StringTools;

class AutUtil {
    public static var sigma:String;
    public static var dataF:String;
    public static var routeData:String;
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
        #end
        return;
    }
}