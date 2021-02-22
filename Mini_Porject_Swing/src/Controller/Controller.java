package Controller;

import Model.*;
import View.*;

import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;

public class Controller{
    Model m;
    View v;
    public Controller(Model m, View v)
    {
        this.m = m;
        this.v = v;
        v.CenterInitialSetup(m.getFpData().getLinesBeingDisplayed(), m.getFpData().getHeaders().size(), m.getFpData());
        v.CenterUpdate(m.getFpData().getLines(m.getFpData().getFirstLineToDisplay(), m.getFpData().getLastLineToDisplay()),m.getFpData().getHeaders());
    }

//    public void onScroll(){
//        CenterPanel cp = new CenterPanel(m.getFpData().getLines(m.getFpData().getFirstLineToDisplay(), m.getFpData().getLastLineToDisplay()),m.getFpData().getHeaders());
//        cp.getCenterPanel().addMouseWheelListener(
//                new MouseWheelListener(){
//                    @Override
//                    public void mouseWheelMoved(MouseWheelEvent mve){
//                        int unit = mve.getUnitsToScroll();
//                    }
//                }
//        );
//    }
//
//    @Override
//    public void mouseWheelMoved(MouseWheelEvent mwe) {
//        CenterPanel cp = new CenterPanel(m.getFpData().getLines(m.getFpData().getFirstLineToDisplay()+mwe.getUnitsToScroll(), m.getFpData().getLastLineToDisplay()+mwe.getUnitsToScroll()),m.getFpData().getHeaders());
//        cp.getCenterPanel().addMouseWheelListener(this);
//    }
}
