package View;

import Model.*;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.util.ArrayList;

public class View {
    FootballPlayer fp = new FootballPlayer();
    InitialFrame f;
    FootballPlayerData fpdata;
    JPanel westPanel;
    private int rows,cols;
    public View()
    {

    }

    public void CenterInitialSetup(int rows, int cols, FootballPlayerData fpdata)
    {
        westPanel = new JPanel();
        JButton b = new JButton("Select the Sort Type");
        westPanel.add(b);
        JButton b1 = new JButton("Merge Sort");
        westPanel.add(b1);
        JButton b2 = new JButton("Quick Sort");
        westPanel.add(b2);
        JButton b3 = new JButton("Selection Sort");
        westPanel.add(b3);
        westPanel.setLayout(new GridLayout(0,1));
        westPanel.setSize(10,10);
        westPanel.setVisible(true);
        this.fpdata = fpdata;
        f = new InitialFrame(fpdata.getLines(fpdata.getFirstLineToDisplay(), fpdata.getLastLineToDisplay()), fpdata.getHeaders(), fpdata);
        this.rows = rows;
        this.cols = cols;
        f.getFrame().add(westPanel);
        f.getFrame().setLayout(new GridLayout(1, 1));
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


}
