package Assignment6;

import sun.awt.X11.ColorEntry;

import java.applet.Applet;
import java.awt.*;
public class Smiley extends Applet {

    public void paint(Graphics pen)
    {
        //for the face
        pen.setColor(Color.yellow);
        pen.fillOval(20,20,150,150);

        //for the eyes
        pen.setColor(Color.BLACK);
        pen.fillOval(50,60,15,25);     // Left Eye
        pen.fillOval(120,60,15,25);    //right eye

        //for the smile
        pen.drawArc(55,95,78,50,0,-180);  // Smile
    }
}
