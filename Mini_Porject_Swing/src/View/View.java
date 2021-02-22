package View;

import Model.*;
import java.util.ArrayList;

public class View {
    FootballPlayer fp = new FootballPlayer();
    CenterPanel cp = new CenterPanel();
    private int rows,cols;
    public View()
    {

    }

    public void CenterInitialSetup(int rows, int cols, FootballPlayerData fpdata)
    {
        InitialFrame f = new InitialFrame(rows, cols, fpdata);
        this.rows = rows;
        this.cols = cols;
    }

    public void CenterUpdate(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
    {

    }

    public CenterPanel getCenterPanal() {
        return cp;
    }
}
