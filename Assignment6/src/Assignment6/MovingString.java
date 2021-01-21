package Assignment6;

import java.applet.Applet;
import java.awt.*;

public class MovingString extends Applet implements Runnable{

    private String name;
    private int x_c, y_c, flag;
    Thread t;

    public void init()
    {
        name = "Avisek Shaw";
        x_c = 100;
        y_c = 100;
        flag = 1;

        t = new Thread(this::run, "My applet");
    }

    public void start()
    {
        // start thread
        t.start();
    }

    public void update()
    {
        x_c += 10*flag;
        if(x_c>300)
        {
            flag = -1;
        }
        else if(x_c<0){
            flag = 1;
        }
    }

    public void run()
    {
        while(true)
        {
            repaint();
            update();

            try {
                Thread.sleep(100);
            }
            catch (InterruptedException ie) {
                System.out.println(ie);
            }
        }
    }

    public void paint(Graphics pen)
    {
        pen.setColor(Color.BLACK);
        pen.drawString(name, x_c, y_c);
    }


}
