/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;
import java.beans.XMLDecoder;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Arrays;


/**
 *
 * @author bhaum
 */


public class FootballPlayerData implements TableData, Displayable {
    private ArrayList<FootballPlayer> players;
    private int firstLine, lastLine,noOfLines;
    public FootballPlayerData()
    {
        firstLine = 0;
        lastLine = 20;
        noOfLines = 20;
        players = new ArrayList<>();
    }

    public void ReadPlayersFromXML()
    {
        try{
            FootballPlayer fp;
            XMLDecoder decoder = new XMLDecoder(new BufferedInputStream(new FileInputStream("FootballPlayerTable.xml")));
            while(true)
            {
                try{
                    fp = (FootballPlayer) decoder.readObject();
                    players.add(fp);
                }catch(ArrayIndexOutOfBoundsException theend){
                    break;
                }
            }
            decoder.close();
        }catch(Exception ex){
            ex.printStackTrace();
        }
        this.noOfLines=players.size()-2;
    }
//TableData methods
    @Override
    public void LoadTable() {

    }

    @Override
    public ArrayList<FootballPlayer> getTable() {
        return null;
    }

    @Override
    public ArrayList<String> getHeaders() {

        return players.get(0).getAttributeNames();
    }

    @Override
    public ArrayList<String> getLine(int n) {
        String []s = players.get(n).toString().split(" ");
        ArrayList <String> ars = new ArrayList<>();
        for(int i=0;i<s.length;i++)
        {
            ars.add(s[i]);
        }

        return ars;
    }

    @Override
    public ArrayList<ArrayList<String>> getLines(int firstLine, int lastLine) {
        ArrayList<ArrayList<String>> result = new ArrayList<>();
        for(int i=firstLine;i<=lastLine;i++)
        {
            result.add(getLine(i));
        }
        return result;
    }
    
    //Displayble Methods
     @Override
    public int getFirstLineToDisplay() {

        return firstLine;
    }

    @Override
    public int getLineToHighlight() {

        return 0;
    }

    @Override
    public int getLastLineToDisplay() {

        return lastLine;
    }

    @Override
    public int getLinesBeingDisplayed() {

        return noOfLines;
    }

    @Override
    public void setFirstLineToDisplay(int firstLine) {
        this.firstLine = firstLine;
    }

    @Override
    public void setLineToHighlight(int highlightedLine) {

    }

    @Override
    public void setLastLineToDisplay(int lastLine) {
        this.lastLine = lastLine;
    }

    @Override
    public void setLinesBeingDisplayed(int noOfLines) {
        this.noOfLines = noOfLines;
    }
    
}
