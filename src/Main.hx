package ;

import haxe.ui.HaxeUIApp;
import haxe.ui.components.Button;

class Main {
    public static function main() {
        var app = new HaxeUIApp();
        app.ready(function() {
            var dMain = new MainView();
            app.addComponent(dMain);

            var oh:Button = new Button();
            oh.text = "Buh";
            oh.set_y(dMain.button1.y + dMain.button1.height + 5);
            app.addComponent(oh);

            app.start();
        });
    }
}
