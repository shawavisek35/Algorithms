package View;
import java.awt.*;
import java.util.ArrayList;
import javax.swing.*;

public class CenterPanel {

    JFrame f;
    public CenterPanel(ArrayList<String> arr)
    {
        //Drawing Columns
//        int i=0;
        f = new JFrame();
//        for(String st : arr)
//        {
//            JButton b = new JButton(st);
//            f.add(b);
//        }
//        f.setLayout(new GridLayout(1,arr.size()));
//        f.setSize(500,500);
//        f.setVisible(true);
    }

    public CenterPanel()
    {
        f = new JFrame();
    }

    public void DisplayPanel(int rows, int cols)
    {
        int i,j;
        for(i=0;i<=rows;i++)
        {
            for(j=0;j<=cols;j++)
            {
                JButton b = new JButton();
                f.add(b);
            }
        }
        f.setLayout(new GridLayout(rows,cols));
        f.setSize(700,700);
        f.setVisible(true);
    }


}

