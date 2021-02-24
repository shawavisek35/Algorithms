package View;

import Model.FootballPlayerData;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.swing.*;

public class CenterPanel implements ActionListener {

    JPanel p;
    FootballPlayerData fp;
    int firstLine, lastLine, noOfLines;
    ArrayList<ArrayList<String>> lines;
    ArrayList<String> headers;
    HashMap<String, JButton> buttons;
    HashMap<String, Integer> sortFields;
    public CenterPanel(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData f)
    {
        fp = f;
        sortFields = new HashMap<String, Integer>();
        sortFields.put("Number", 1);
        sortFields.put("Position", 2);
        sortFields.put("Name", 3);
        sortFields.put("Height", 4);
        sortFields.put("Weight", 5);
        sortFields.put("Hometown", 6);
        sortFields.put("HighSchool", 7);
        firstLine = f.getFirstLineToDisplay();
        lastLine = f.getLastLineToDisplay();
        noOfLines = f.getLinesBeingDisplayed();
        this.lines = lines;
        this.headers = headers;
        buttons = new HashMap<String, JButton>();
        //Drawing Columns
        int i=0;
        p = new JPanel();
        for(String st : headers)
        {
            JButton b = new JButton(st);
            b.setMaximumSize(new Dimension(10,10));
            buttons.put(st, b);
            b.addActionListener(this);
            b.setBackground(Color.CYAN);
            p.add(b);
        }

        //Displaying data
        for(ArrayList<String> a : lines)
        {
            for(String s : a)
            {
                JButton b = new JButton(s);
                b.setMaximumSize(new Dimension(10,10));
                p.add(b);
            }
        }
        p.setLayout(new GridLayout(0,headers.size()));
        p.setSize(900,900);
        p.setVisible(true);
    }

//    public JPanel createCentralPanel()
//    {
//        int i=0;
//        p = new JPanel();
//        for(String st : headers)
//        {
//            JButton b = new JButton(st);
//            b.setBackground(Color.CYAN);
//            p.add(b);
//        }
//
////        for(ArrayList<String> a : f.getLines(f.getFirstLineToDisplay(),f.getLastLineToDisplay()))
////        {
////            for(String s : a)
////            {
////                JButton b = new JButton(s);
////                p.add(b);
////            }
////        }
//        DisplayTable();
//        p.addMouseWheelListener(this);
//        p.setLayout(new GridLayout(0,headers.size()));
//        p.setVisible(true);
//        return p;
//    }

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

//    public void DisplayTable()
//    {
//        for(ArrayList<String> a : fp.getLines(firstLine,lastLine))
//        {
//            for(String s : a)
//            {
//                JButton b = new JButton(s);
//                p.add(b);
//            }
//        }
//    }

    public JPanel getCenterPanel()
    {
        return p;
    }

    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        String s = actionEvent.getActionCommand();
        fp.sort(1, sortFields.get(s));
        for(Map.Entry m : buttons.entrySet())
        {
            buttons.get(m.getKey()).setBackground(Color.CYAN);
        }
        buttons.get(s).setBackground(Color.YELLOW);
    }


//    @Override
//    public void mouseWheelMoved(MouseWheelEvent mouseWheelEvent) {
//        int units = mouseWheelEvent.getUnitsToScroll();
//        if(firstLine+units<=0 || lastLine+units>=noOfLines)
//        {
//            firstLine = firstLine;
//            lastLine = lastLine;
//        }
//        else{
//            firstLine += units;
//            lastLine += units;
//        }
//        jf.getContentPane().removeAll();
//
//        p = createCentralPanel();
//        jf.getContentPane().add(p);
//        jf.revalidate();
//        jf.pack();
//
//
//    }
}

