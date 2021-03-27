/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;

import Model.FootballPlayer;
import Model.FootballPlayerData;
import javax.swing.*;
import java.util.ArrayList;

public class InitialPanel {
    JPanel p;
    CenterPanel cp;
    FootballPlayer fp;

    public InitialPanel(ArrayList<ArrayList<String>> lines, ArrayList<String> headers, FootballPlayerData f)
    {
        fp = new FootballPlayer();
        cp = new CenterPanel(lines,headers,f);

    }

    public JPanel getInitialPanel()
    {
        return cp.getCenterPanel();
    }
    public JPanel getCentralPanel(){
        return cp.getCenterPanel();
    }

}