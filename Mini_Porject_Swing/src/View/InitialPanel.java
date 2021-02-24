package View;

import Model.FootballPlayer;
import Model.FootballPlayerData;

import javax.swing.*;
import java.util.ArrayList;

public class InitialPanel {
    JPanel p;
    CenterPanel cp;
    FootballPlayer fp;

    public InitialPanel(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData f)
    {
        fp = new FootballPlayer();
        cp = new CenterPanel(lines,headers,f);

    }

    public JPanel getInitialPanel()
    {
        return cp.getCenterPanel();
    }
//    public JPanel createPanel(int rows, int cols, FootballPlayerData fp)
//    {
//        p = cp.DisplayPanel(fp.getLines(rows,cols),fp.getHeaders());
//        return p;
//    }

    public JPanel getCentralPanel()
    {
        return cp.getCenterPanel();
    }
}
