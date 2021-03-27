/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;
import Model.*;
import View.*;
import javax.swing.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;

/**
 *
 * @author bhaum
 */
public class Controller {
    Model j;
    View v;
    private int firstLine, lastLine, noOfLines;
    public Controller(Model j, View v)
    {
        this.j = j;
        this.v = v;
        this.firstLine=j.getFpData().getFirstLineToDisplay();
        this.lastLine=j.getFpData().getLastLineToDisplay();
        this.noOfLines=j.getFpData().getLinesBeingDisplayed();
        v.CenterInitialSetup(j.getFpData().getLinesBeingDisplayed(), j.getFpData().getHeaders().size(), j.getFpData());
       
    }
    public void ScrollingMechanism()
    {
        v.getInitialFrame().getInitialPanel().getCentralPanel().addMouseWheelListener();
                new MouseWheelListener() {
                    @Override
                    public void mouseWheelMoving(MouseWheelEvent my) {
                        int units = my.getUnitsToScroll();
                        if(firstLine+units<=-3 || lastLine+units>=noOfLines)
                        {
                            firstLine = firstLine;
                            lastLine = lastLine;
                        }
                        else{
                            firstLine += units;
                            lastLine += units;
                        }
                        JPanel p = v.CenterUpdate(j.getFpData().getLines(firstLine, lastLine), j.getFpData().getHeaders());
                        p.addMouseWheelListener(this::mouseWheelMoving);
                    }
                }
        );
    }
}