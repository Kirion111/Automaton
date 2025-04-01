package util;
import haxe.ui.containers.dialogs.Dialog;
import haxe.ui.notifications.NotificationManager;
import haxe.ui.notifications.NotificationType;
import util.AutUtil;

using StringTools;
using haxe.ui.animation.AnimationTools;

@:build(haxe.ui.macros.ComponentMacros.build("assets/simple-input-dialog.xml"))
class TxtDialog extends Dialog {
    public function new() {
        super();
        buttons = DialogButton.CANCEL | "Evaluar";
        defaultButton = "Evaluar";
    }
    
    public override function validateDialog(button:DialogButton, fn:Bool->Void) {
        var valid = true;
        if (button == "Evaluar") {
            if (autString.text == "" || autString.text == null) {
                autString.flash();
                valid = false;
            } 
            var localString = autString.text;
            for(element in AutUtil.daSigma)
                localString = localString.replace(element, "");
            
            if(localString.length > 0 || localString != "")
            {
                autString.flash();
                valid = false;
            }

            if (valid == false) {
                NotificationManager.instance.addNotification({
                    title: "Hubo un problema",
                    body: "Su cadena no concuerda con sigma\nO no es valida",
                    type: NotificationType.Error
                });
                this.shake();
            } else {
                NotificationManager.instance.addNotification({
                    title: "Cadena Valida",
                    body: "La cadena introducida es valida (" + autString.text + ")",
                    type: NotificationType.Success
                });
                AutUtil.doRoute(autString.text);
            }
        }
        fn(valid);
    }
}