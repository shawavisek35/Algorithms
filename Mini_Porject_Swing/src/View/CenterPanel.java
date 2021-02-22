package View;
import Model.FootballPlayerData;

import java.awt.*;
import java.util.ArrayList;
import javax.swing.*;

public class CenterPanel {

    JPanel p;
    public CenterPanel(int rows, int cols, FootballPlayerData f)
    {
        //Drawing Columns
        int i=0;
        p = new JPanel();
        for(String st : f.getHeaders())
        {
            System.out.println("here is my s : "+st);
            JButton b = new JButton(st);
            b.setBackground(Color.CYAN);
            p.add(b);
        }
        System.out.println(String.valueOf(rows)+" "+String.valueOf(cols)+" "+f.getLines(f.getFirstLineToDisplay(), f.getLastLineToDisplay()).size());
        for(ArrayList<String> a : f.getLines(f.getFirstLineToDisplay(),f.getLinesBeingDisplayed()))
        {
            for(String s : a)
            {
                System.out.println("here is my s : "+s);
                JButton b = new JButton(s);
                p.add(b);
            }
        }
        p.setLayout(new GridLayout(0,f.getHeaders().size()));
        p.setVisible(true);
    }

    public CenterPanel()
    {
        p = new JPanel();
    }

//    public JPanel DisplayPanel(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
//    {
//        for(ArrayList<String> a : lines)
//        {
//            for(String s : a)
//            {
//                JButton b = new JButton(s);
//                p.add(b);
//            }
//        }
//        p.setLayout(new GridLayout(0,headers.size()));
//        p.setVisible(true);
//        return p;
//    }
    public JPanel getCenterPanel()
    {
        return p;
    }



}

