package View;

import Model.FootballPlayerData;

import javax.swing.*;

public class InitialFrame {
    JFrame f;
    InitialPanel ip;
    public InitialFrame(int rows, int cols, FootballPlayerData fp)
    {
        f = new JFrame();
        ip = new InitialPanel(rows, cols, fp);
        f.add(ip.getInitialPanel());
        f.setSize(800,800);
        f.setVisible(true);

    }
}
