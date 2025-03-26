package ;

import haxe.ui.HaxeUIApp;
import haxe.ui.components.Button;
import haxe.ui.containers.dialogs.OpenFileDialog;
import util.AutUtil;

using StringTools;
#if sys
import sys.FileSystem;
import sys.io.File;
#end

class Main {
    public static function main() {
        var app = new HaxeUIApp();
        app.ready(function() {
            var dMain = new MainView();
            app.addComponent(dMain);

            app.start();
        });
    }
}