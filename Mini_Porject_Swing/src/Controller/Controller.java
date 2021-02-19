package Controller;

import Model.*;
import View.*;

public class Controller {
    Model m;
    View v;
    public Controller(Model m, View v)
    {
        this.m = m;
        this.v = v;
        v.CenterInitialSetup(m.getFpData().getLinesBeingDisplayed(), m.getFpData().getHeaders().size());
        v.CenterUpdate(m.getFpData().getLines(m.getFpData().getFirstLineToDisplay(), m.getFpData().getLastLineToDisplay()),m.getFpData().getHeaders());
    }
}
