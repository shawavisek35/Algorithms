package View;

import Model.*;
import java.util.ArrayList;

public class View {
    FootballPlayer fp = new FootballPlayer();
    private int rows,cols;
    public View()
    {

    }

    public void CenterInitialSetup(int rows, int cols, FootballPlayerData fpdata)
    {
        InitialFrame f = new InitialFrame(fpdata.getLines(fpdata.getFirstLineToDisplay(), fpdata.getLastLineToDisplay()), fpdata.getHeaders(), fpdata);
        this.rows = rows;
        this.cols = cols;
    }

    public void CenterUpdate(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
    {
//        CenterPanel newPanel = new CenterPanel(lines,headers);
    }

}
