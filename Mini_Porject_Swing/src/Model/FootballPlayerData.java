package Model;

import java.beans.XMLDecoder;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Arrays;

public class FootballPlayerData implements TableData {
    private ArrayList<FootballPlayer> players;

    public FootballPlayerData()
    {
            players = new ArrayList<>();
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
    }

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
}
