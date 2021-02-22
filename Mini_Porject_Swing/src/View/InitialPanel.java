package View;

import Model.FootballPlayer;
import Model.FootballPlayerData;

import javax.swing.*;

public class InitialPanel {
    JPanel p;
    CenterPanel cp;
    FootballPlayer fp;

    public InitialPanel(int rows, int cols, FootballPlayerData f)
    {
        fp = new FootballPlayer();
        cp = new CenterPanel(rows,cols,f);
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
}
