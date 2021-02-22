package View;

import Model.FootballPlayerData;

import javax.swing.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.util.ArrayList;

public class InitialFrame{
    JFrame f;
    InitialPanel ip;
    ArrayList<ArrayList<String>> lines;
    ArrayList<String> headers;
    public InitialFrame(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData fp)
    {
        this.lines = lines;
        this.headers = headers;
        f = new JFrame();
        ip = new InitialPanel(lines, headers, fp);
        f.add(ip.getInitialPanel());
        f.setSize(800,800);
        f.setVisible(true);

    }
//    @Override
//    public void mouseWheelMoved(MouseWheelEvent mouseWheelEvent) {
//        int units = mouseWheelEvent.getUnitsToScroll();
//        CenterPanel cp = new CenterPanel(lines, headers);
//        f.add(cp.getCenterPanel());
//        f.setVisible(true);
//    }
}
