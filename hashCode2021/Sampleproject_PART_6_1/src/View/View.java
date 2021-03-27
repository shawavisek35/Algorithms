/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;
import Model.*;
import java.util.ArrayList;

/**
 *
 * @author bhaum
 */
public class View {
    FootballPlayer fp = new FootballPlayer();
    InitialFrame f;
    FootballPlayerData fpdata;
    JFrame jf;
    private int rows,cols;
    public void CenterInitialSetup(int rows, int cols, FootballPlayerData fpdata)
    {
        InitialFrame f = new InitialFrame(fpdata.getLines(fpdata.getFirstLineToDisplay(), fpdata.getLastLineToDisplay()), fpdata.getHeaders(), fpdata);
        this.rows = rows;
        this.cols = cols;
    }

    public void CenterUpdate(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
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