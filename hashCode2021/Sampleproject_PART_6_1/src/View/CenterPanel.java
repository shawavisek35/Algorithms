/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;
import Model.FootballPlayerData;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Dictionary;
import java.util.HashMap;
import java.util.Map;
import javax.swing.*;
/**
 *
 * @author bhaum
 */
public class CenterPanel implements ActionListener {
     JPanel p;
     FootballPlayerData fp;
    int firstLine, lastLine, noOfLines;
    ArrayList<ArrayList<String>> lines;
    ArrayList<String> headers;
    HashMap<String, JButton> buttons;
    public CenterPanel(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData f)
    {
        fp = f;
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
            buttons.put(st, b);
            b.addActionListener(this);
            b.setBackground(Color.PINK);
            p.add(b);
        }

        //Displaying data
        for(ArrayList<String> a : lines)
        {
            for(String s : a)
            {
                JButton b = new JButton(s);
                p.add(b);
            }
        }
        p.setLayout(new GridLayout(0,headers.size()));
        p.setSize(900,900);
        p.setVisible(true);
    }



    public CenterPanel()
    {
        p = new JPanel();
    }


    public JPanel getCenterPanel()
    {
        return p;
    }

    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        String s = actionEvent.getActionCommand();
        for(Map.Entry m : buttons.entrySet())
        {
            buttons.get(m.getKey()).setBackground(Color.PINK);
        }
        buttons.get(s).setBackground(Color.RED);
    }



}
