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
        lastLine = 30;
        noOfLines = 20;
        sortType = 1;
        sortField = 1;
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
        sort();
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
    public void sort() {
        if(sortType == 1)
        {
            selectionSort();
        }


        else if(sortType == 2)
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
        else{
            FootballPlayer[] arr = new FootballPlayer[players.size()];
            arr = players.toArray(arr);
            if(sortField == 1)
            {
                Arrays.sort(arr, new SortByNumber());
            }
            else if(sortField == 2)
            {
                Arrays.sort(arr, new SortByPosition());
            }
            else if(sortField == 3)
            {
                Arrays.sort(arr, new SortByName());
            }
            else if(sortField == 4)
            {
                Arrays.sort(arr, new SortByHeight());
            }
            else if(sortField == 5)
            {
                Arrays.sort(arr, new SortByWeight());
            }
            else if(sortField == 6)
            {
                Arrays.sort(arr, new SortByHometown());
            }
            else{
                Arrays.sort(arr, new SortByHighSchool());
            }
            players = new ArrayList<FootballPlayer>(Arrays.asList(arr));
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

    //Selection sort
    public void selectionSort(){
        for (int i = 0; i < players.size() - 1; i++)
        {
            int index = i;
            if(sortField == 1)
            {
                for (int j = i + 1; j < players.size(); j++){
                    if (players.get(j).getNumber() < players.get(index).getNumber()){
                        index = j;//searching for lowest index
                    }
                }
            }
            else if(sortField == 2)
            {
                for (int j = i + 1; j < players.size(); j++){
                    if (players.get(index).getPosition().compareTo(players.get(j).getPosition())>0) {
                        index = j;//searching for lowest index
                    }
                }
            }
            else if(sortField == 3)
            {
                for (int j = i + 1; j < players.size(); j++){
                    if (players.get(index).getName().compareTo(players.get(j).getName())>0) {
                        index = j;//searching for lowest index
                    }
                }
            }
            else if(sortField == 4)
            {
                for (int j = i + 1; j < players.size(); j++){
                    if ((players.get(index).getHeight2() > players.get(j).getHeight2())) {
                        index = j;//searching for lowest index
                    }
                }
            }
            else if(sortField == 5)
            {
                for (int j = i + 1; j < players.size(); j++){
                    if (players.get(j).getWeight() < players.get(index).getWeight()){
                        index = j;//searching for lowest index
                    }
                }
            }
            else if(sortField == 6)
            {
                for (int j = i + 1; j < players.size(); j++){
                    if (players.get(index).getHometown().compareTo(players.get(j).getHometown())>0){
                        index = j;//searching for lowest index
                    }
                }
            }
            else{
                for (int j = i + 1; j < players.size(); j++){
                    if (players.get(index).getHighSchool().compareTo(players.get(j).getHighSchool())>0){
                        index = j;//searching for lowest index
                    }
                }
            }
            FootballPlayer footbp = players.get(index);
            players.set(index,players.get(i));
            players.set(i,footbp);
        }
    }


}

//Sorting Comparators
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

