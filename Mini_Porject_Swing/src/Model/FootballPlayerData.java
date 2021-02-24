package Model;

import java.beans.XMLDecoder;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.util.*;

public class FootballPlayerData implements TableData, Displayable, Sortable {
    private ArrayList<FootballPlayer> players;
    private int firstLine, lastLine, noOfLines, sortType, sortField;

    public FootballPlayerData()
    {
        firstLine = 0;
        lastLine = 20;
        noOfLines = 20;
        players = new ArrayList<FootballPlayer>();
    }

    public void ReadPlayersFromXML()
    {
        try{
            FootballPlayer fp;
            XMLDecoder decoder = new XMLDecoder(new BufferedInputStream(new FileInputStream("/home/avisek/Desktop/work/Algorithms/Mini_Porject_Swing/src/Model/FootballPlayerTable.xml")));
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
        String []s = players.get(n).toString().split(";");
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

    //Displayable Methods
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

    @Override
    public void sort(int sortType, int sortField) {
        if(sortType == 1)
        {
            if(sortField == 1)
            {
                Collections.sort(players, new SortByNumber());
            }
            else if(sortField == 2)
            {
                Collections.sort(players, new SortByPosition());
            }
            else if(sortField == 3)
            {
                Collections.sort(players, new SortByName());
            }
            else if(sortField == 4)
            {
                Collections.sort(players, new SortByHeight());
            }
            else if(sortField == 5)
            {
                Collections.sort(players, new SortByWeight());
            }
            else if(sortField == 6)
            {
                Collections.sort(players, new SortByHometown());
            }
            else{
                Collections.sort(players, new SortByHighSchool());
            }
        }
    }

    @Override
    public int getSort() {
        return 0;
    }

    @Override
    public void setSortType(int sortType) {
        this.sortType = sortType;
    }

    @Override
    public void setSortField(int sortField) {
        this.sortField = sortField;
    }


}
class SortByName implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getName().compareTo(f2.getName());
    }
}
class SortByNumber implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getNumber() - (f2.getNumber());
    }
}
class SortByHeight implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getHeight().compareTo(f2.getHeight());
    }
}
class SortByWeight implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getWeight() - (f2.getWeight());
    }
}
class SortByHometown implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getHometown().compareTo(f2.getHometown());
    }
}
class SortByHighSchool implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getHighSchool().compareTo(f2.getHighSchool());
    }
}
class SortByPosition implements Comparator<FootballPlayer> {

    @Override
    public int compare(FootballPlayer f1, FootballPlayer f2) {
        return f1.getPosition().compareTo(f2.getPosition());
    }
}