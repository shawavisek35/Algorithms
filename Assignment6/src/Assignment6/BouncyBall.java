package Assignment6;
import java.applet.*;
import java.awt.*;

public class BouncyBall extends Applet implements Runnable{
    private int x,y,flag;
    Thread t;
    public void init()
    {
        x = 200;
        y = 0;
        flag = 2;
        t = new Thread(this::run, "Bouncy thread");
    }

    public void start()
    {
        t.start();
    }
    public void update()
    {
        y += 10*flag;
        if(y>500)
        {
            flag=-2;
        }
        else if(y<0){
            flag = 2;
        }
    }

    public void run()
    {
        while(true)
        {
            repaint();
            update();

            try{
                Thread.sleep(100);
            }
            catch(Exception e)
            {
                System.out.println(e);
            }

        }
    }

    public void paint(Graphics pen)
    {
        pen.setColor(Color.red);
        pen.fillOval(x,y,150,150);
    }
}
