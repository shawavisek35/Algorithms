package Controller;

import Model.*;
import View.*;

import javax.swing.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;

public class Controller {
    Model m;
    View v;
    private int firstLine, lastLine,noOfLines;
    public Controller(Model m, View v)
    {
        this.firstLine = m.getFpData().getFirstLineToDisplay();
        this.lastLine = m.getFpData().getLastLineToDisplay();
        this.noOfLines = m.getFpData().getLinesBeingDisplayed();
        this.m = m;
        this.v = v;
        v.CenterInitialSetup(m.getFpData().getLinesBeingDisplayed(), m.getFpData().getHeaders().size(), m.getFpData());
        addScrolling();
    }

    public void addScrolling()
    {
        v.getInitialFrame().getInitialPanel().getCentralPanel().addMouseWheelListener(
                new MouseWheelListener() {
                    @Override
                    public void mouseWheelMoved(MouseWheelEvent me) {
                        int units = me.getUnitsToScroll();
                        if(firstLine+units<=-3 || lastLine+units>=noOfLines)
                        {
                            firstLine = firstLine;
                            lastLine = lastLine;
                        }
                        else{
                            firstLine += units;
                            lastLine += units;
                        }
                        JPanel p = v.CenterUpdate(m.getFpData().getLines(firstLine, lastLine), m.getFpData().getHeaders());
                        p.addMouseWheelListener(this::mouseWheelMoved);
                    }
                }
        );
    }
}
