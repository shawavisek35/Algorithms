/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;
import Model.FootballPlayerData;

import javax.swing.*;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.util.ArrayList;

public class InitialFrame implements MouseWheelListener{
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
        f = new JFrame();
        ip = new InitialPanel(lines, headers, fp);
        p = ip.getInitialPanel();
        f.addMouseWheelListener(this);
        f.add(p);
        f.setSize(1920,1080);
        f.setVisible(true);

    }

  public InitialPanel getInitialPanel(){
      return ip;
  }
  public JFrame getFrame(){
      return f;
  }
 @Override
    public void mouseWheelMoved(MouseWheelEvent mouseWheelEvent) {

    }
}