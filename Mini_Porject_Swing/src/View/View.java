package View;

import Model.*;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;


public class View implements ActionListener {
    HashMap<String, Integer> sortType;
    HashMap<String, JButton> sortButtons;
    FootballPlayer fp = new FootballPlayer();
    InitialFrame f;
    FootballPlayerData fpdata;
    JPanel westPanel;
    private int rows,cols;
    public View()
    {
        sortType = new HashMap<String, Integer>();
        sortButtons = new HashMap<String, JButton>();
        sortType.put("Selection Sort", 1);
        sortType.put("Merge Sort", 2);
        sortType.put("Quick Sort", 3);

    }

    public void CenterInitialSetup(int rows, int cols, FootballPlayerData fpdata)
    {
        this.fpdata = fpdata;
        f = new InitialFrame(fpdata.getLines(fpdata.getFirstLineToDisplay(), fpdata.getLastLineToDisplay()), fpdata.getHeaders(), fpdata);
        this.rows = rows;
        this.cols = cols;
        f.getFrame().setLayout(new GridBagLayout());
        f.getFrame().setBackground(Color.BLACK);
        westPanel = new JPanel();
        JButton b = new JButton("Select the Sort Type");
        b.setBackground(Color.BLACK);
        b.setForeground(Color.white);

        westPanel.add(b);
        JButton b1 = new JButton("Selection Sort");
        b1.setBackground(Color.BLACK);
        b1.setForeground(Color.white);
        sortButtons.put("Selection Sort", b1);
        westPanel.add(b1);
        b1.addActionListener(this);
        JButton b2 = new JButton("Merge Sort");
        b2.setBackground(Color.BLACK);
        b2.setForeground(Color.white);
        b2.addActionListener(this);
        sortButtons.put("Merge Sort", b2);
        westPanel.add(b2);
        JButton b3 = new JButton("Quick Sort");
        b3.setBackground(Color.BLACK);
        b3.setForeground(Color.white);

        b3.setPreferredSize(new Dimension(60, 150));
        b3.addActionListener(this);
        sortButtons.put("Quick Sort", b3);
        westPanel.add(b3);
        westPanel.setBackground(Color.CYAN);
        westPanel.setLayout(new GridLayout(0,1));
        westPanel.setVisible(true);
        f.getFrame().add(westPanel);
    }

    public JPanel CenterUpdate(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
    {
        InitialPanel ip = new InitialPanel(lines, headers, fpdata);
        JPanel p = ip.getCentralPanel();
        f.getFrame().getContentPane().removeAll();
        f.getFrame().add(westPanel);
        f.getFrame().add(p);
        f.getFrame().revalidate();
        f.getFrame().pack();
        return p;
    }

    public InitialFrame getInitialFrame()
    {
        return f;
    }


    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        String s = actionEvent.getActionCommand();
        fpdata.setSortType(sortType.get(s));
        for(Map.Entry m : sortType.entrySet())
        {
            sortButtons.get(m.getKey()).setBackground(Color.BLACK);
            sortButtons.get(m.getKey()).setForeground(Color.WHITE);
        }
        sortButtons.get(s).setBackground(Color.WHITE);
        sortButtons.get(s).setForeground(Color.BLACK);
    }
}
