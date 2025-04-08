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
        minAut.onClick = function (e) {
            /*
            En esta parte, consiste en solo mostrar los grupos de estados que lleven a los estados del automata
            El punto es mostrar las rutas/estados importantes, en el proceso, se eliminan las rutas/estadis
            que llevan al mismo lugar.
            Se agrupan los estados que llevan al estado final y a los que llevan a ellos mismos (Sin contar
            al estado final)
            Se empieza a iterar en el grupo con mas elementos.
            Si en dicho grup, resulta que terminan en un estado fuera de su grupo original, se saca de este grupo
            de iteracion.
            Al terminar la iteracion, se comprueba que este grupo resultante no sea el mismo que el grupo que se 
            genero anteriormente. --?
            Si es el caso, se hace una nueva iteracion con los elementos restantes, con los mismos pasos.

            En el momento en el que se termine la iteracion, se agarra solo un estado representativo de cada grupo,
            si hay mas de un elemento en un grupo, solo agarraras 1, el que sea (Random) realmente no importa.
            */
            if(AutUtil.routeData == null)
            {
                Dialogs.messageBox("Primero Carga un automata", "Error", MessageBoxType.TYPE_ERROR, true);
                return;
            }
            AutUtil.minimizeAFD();
        }
        dTransform.onClick = function(e) {
            /*
            En esta parte, vamos a transformar un algoritmo no determinista a determinista
            Para esto, usaremos la ruta original, e iremos creando nuevos estados para aquellos que no existen en
            en automata.
            El algoritmo empezara a moverse entre estados, y a generar nuevos estados mientras va iterando
            entre estos, si ve que un estado no existe, lo crea, si ya existe, lo ignora.
            Cada nuevo estado tambien ira checando sus nuevos resultados.
            
            Los estados finales se vuelven aquellos que tiene una union de uno de los estados finales originales.
            */
            
        }
    }
    /*
    @:bind(button2, MouseEvent.CLICK)
    private function onMyButton(e:MouseEvent) {
        button2.text = "Thanks!";
    }
    */
}