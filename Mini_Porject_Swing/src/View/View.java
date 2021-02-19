package View;

import Model.FootballPlayer;

import java.util.ArrayList;

public class View {
    FootballPlayer fp = new FootballPlayer();
    public View()
    {

    }

    public void CenterInitialSetup(int rows, int cols)
    {
        CenterPanel cp = new CenterPanel(fp.getAttributeNames());
        cp.DisplayPanel(rows, cols);
    }

    public void CenterUpdate(ArrayList<ArrayList<String>> lines, ArrayList<String> headers)
    {

    }
}
