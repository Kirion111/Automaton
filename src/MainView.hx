package ;

import haxe.ui.containers.VBox;
import haxe.ui.containers.dialogs.Dialogs;
import haxe.ui.containers.dialogs.MessageBox;
import haxe.ui.containers.dialogs.OpenFileDialog;
import haxe.ui.events.MouseEvent;
import util.AutUtil;
import util.TxtDialog;

using StringTools;
#if sys
import sys.FileSystem;
import sys.io.File;
#end

@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {
    public function new() {
        super();

        load.onClick = function(e){
            var helper = new OpenFileDialog();
            helper.show();
            helper.onDialogClosed = function (event) {
                var files = helper.selectedFiles;
                if(event.canceled || files == null)
                {
                    label1.htmlText="Invalid File";
                    return;
                }
                if(!files[0].name.endsWith(".txt")){
                    label1.htmlText="Invalid File (name:" + files[0].name+ ")";
                    return;
                }
                #if sys
                if(FileSystem.exists(files[0].fullPath))
                {
                    label1.htmlText="Valid File (name:" + files[0].name+ ")";
                    AutUtil.getAutomaton(files[0].fullPath);
                    content.htmlText="\nSigma: "+AutUtil.sigma+"\nF: "+AutUtil.dataF+"\nRoute Data: "+AutUtil.routeData;
                }
                else
                    label1.htmlText="Invalid File";
                #end
            }
        }
        checkType.onClick = function(e){
            if(AutUtil.routeData == null)
            {
                Dialogs.messageBox("Primero Carga un automata", "Error", MessageBoxType.TYPE_ERROR, true);
                return;
            }
            final result:String = AutUtil.checkAutomaton() == true ? "NON " : "";
            label1.htmlText="Automaton is Finite " + result + "deterministic";
            trace("wasnt null");
        }
        checkString.onClick = function(e){
            if(AutUtil.routeData == null)
            {
                Dialogs.messageBox("Primero Carga un automata", "Error", MessageBoxType.TYPE_ERROR, true);
                return;
            }
            var userInput = new TxtDialog();
            userInput.showDialog();
        }
    }
    /*
    @:bind(button2, MouseEvent.CLICK)
    private function onMyButton(e:MouseEvent) {
        button2.text = "Thanks!";
    }
    */
}