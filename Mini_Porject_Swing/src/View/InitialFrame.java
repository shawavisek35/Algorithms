package View;

import Model.FootballPlayerData;

import javax.swing.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.util.ArrayList;

public class InitialFrame implements MouseWheelListener {
    JFrame f;
    InitialPanel ip;
    JPanel p;
    FootballPlayerData fp;
    ArrayList<ArrayList<String>> lines;
    ArrayList<String> headers;
    int firstLine,lastLine,noOfLines;
    public InitialFrame(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData fp)
    {
        this.fp = fp;
        this.firstLine = fp.getFirstLineToDisplay();
        this.lastLine = fp.getLastLineToDisplay();
        this.noOfLines = fp.getLinesBeingDisplayed();
        this.lines = lines;
        this.headers = headers;
        f = new JFrame("Avisek Shaw | Football Player\'s Data");
        ip = new InitialPanel(lines, headers, fp);
        p = ip.getInitialPanel();
        p.addMouseWheelListener(this);
        f.add(p);
        f.setSize(1080, 700);
        f.setVisible(true);

    }

//    @Override
//    public void mouseWheelMoved(MouseWheelEvent mouseWheelEvent) {
//        int units = mouseWheelEvent.getUnitsToScroll();
//        if(firstLine+units<=-3 || lastLine+units>=noOfLines)
//        {
//            firstLine = firstLine;
//            lastLine = lastLine;
//        }
//        else{
//            firstLine += units;
//            lastLine += units;
//        }
//        f.getContentPane().removeAll();
//
//        ip = new InitialPanel(this.fp.getLines(firstLine, lastLine),headers, fp);
//        p = ip.getInitialPanel();
//        p.addMouseWheelListener(this);
//        f.getContentPane().add(p);
//        f.revalidate();
//        f.pack();
//    }

    public InitialPanel getInitialPanel()
    {
        return ip;
    }

    public JFrame getFrame()
    {
        return f;
    }

    @Override
    public void mouseWheelMoved(MouseWheelEvent mouseWheelEvent) {

    }
}
