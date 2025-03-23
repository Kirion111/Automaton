package ;

import haxe.ui.HaxeUIApp;
import haxe.ui.components.Button;
import haxe.ui.components.Label;
import haxe.ui.containers.dialogs.OpenFileDialog;
#if sys
import sys.FileSystem;
#end

class Main {
    public static function main() {
        var app = new HaxeUIApp();
        app.ready(function() {
            var dMain = new MainView();
            app.addComponent(dMain);

            var oh:Button = new Button();
            oh.text = "Buh";

            oh.set_y(dMain.button1.y + dMain.button1.height + 25);
            oh.onClick = function(event)
            {
                var helper = new OpenFileDialog();
                helper.show();
                helper.callback = function(btnn, files){
                    
                }
                helper.onDialogClosed = function (event) {
                    var files = helper.selectedFiles;
                    if(event.canceled || files == null)
                    {
                        dMain.label1.htmlText="Invalid File";
                        return;
                    }
                    #if sys
                    if(FileSystem.exists(files[0].fullPath))
                    {
                        dMain.label1.htmlText="Valid File";
                    }
                    else
                        dMain.label1.htmlText="Invalid File";
                    #end
                }
            }
            app.addComponent(oh);

            app.start();
        });
    }
}
