package View;

import Model.*;

import javax.swing.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.util.ArrayList;

public class View {
    FootballPlayer fp = new FootballPlayer();
    InitialFrame f;
    FootballPlayerData fpdata;
    JFrame jf;
    private int rows,cols;
    public View()
    {

    }

    public void CenterInitialSetup(int rows, int cols, FootballPlayerData fpdata)
    {
        this.fpdata = fpdata;
        f = new InitialFrame(fpdata.getLines(fpdata.getFirstLineToDisplay(), fpdata.getLastLineToDisplay()), fpdata.getHeaders(), fpdata);
        this.rows = rows;
        this.cols = cols;
    }

    public JPanel CenterUpdate(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
    {
        InitialPanel ip = new InitialPanel(lines, headers, fpdata);
        JPanel p = ip.getCentralPanel();
        f.getFrame().getContentPane().removeAll();
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
