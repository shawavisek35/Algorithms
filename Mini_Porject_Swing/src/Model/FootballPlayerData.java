package Model;

import java.beans.XMLDecoder;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.util.ArrayList;

public class FootballPlayerData implements TableData {
    private ArrayList<FootballPlayer> players;

    public FootballPlayerData()
    {
            players = new ArrayList<>();
    }

    public void ReadPlayersFromXML()
    {
        try{
            FootballPlayer fp = new FootballPlayer();
            XMLDecoder decoder = new XMLDecoder(new BufferedInputStream(new FileInputStream("")));
            while(fp!=null)
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
        return players.get(n).getAttributes();
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
