package View;

import Model.FootballPlayerData;
import java.awt.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.util.ArrayList;
import javax.swing.*;

public class CenterPanel implements MouseWheelListener {

    JPanel p;
    JFrame jf;
    FootballPlayerData fp;
    int firstLine, lastLine, noOfLines;
    ArrayList<ArrayList<String>> lines;
    ArrayList<String> headers;
    public CenterPanel(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData f)
    {
        fp = f;
        firstLine = f.getFirstLineToDisplay();
        lastLine = f.getLastLineToDisplay();
        noOfLines = f.getLinesBeingDisplayed();
        this.lines = lines;
        this.headers = headers;
        jf = new JFrame();
        //Drawing Columns
        jf.add(createCentralPanel());
        jf.setSize(800, 800);
        jf.setVisible(true);
    }

    public JPanel createCentralPanel()
    {
        int i=0;
        p = new JPanel();
        for(String st : headers)
        {
            JButton b = new JButton(st);
            b.setBackground(Color.CYAN);
            p.add(b);
        }

//        for(ArrayList<String> a : f.getLines(f.getFirstLineToDisplay(),f.getLastLineToDisplay()))
//        {
//            for(String s : a)
//            {
//                JButton b = new JButton(s);
//                p.add(b);
//            }
//        }
        DisplayTable();
        p.addMouseWheelListener(this);
        p.setLayout(new GridLayout(0,headers.size()));
        p.setVisible(true);
        return p;
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

    public void DisplayTable()
    {
        for(ArrayList<String> a : fp.getLines(firstLine,lastLine))
        {
            for(String s : a)
            {
                JButton b = new JButton(s);
                p.add(b);
            }
        }
    }

    public JPanel getCenterPanel()
    {
        return p;
    }


    @Override
    public void mouseWheelMoved(MouseWheelEvent mouseWheelEvent) {
        int units = mouseWheelEvent.getUnitsToScroll();
        if(firstLine+units<=0 || lastLine+units>=noOfLines)
        {
            firstLine = firstLine;
            lastLine = lastLine;
        }
        else{
            firstLine += units;
            lastLine += units;
        }
        jf.getContentPane().removeAll();

        p = createCentralPanel();
        jf.getContentPane().add(p);
        jf.revalidate();
        jf.pack();


    }
}

