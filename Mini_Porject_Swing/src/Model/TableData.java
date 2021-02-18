package Model;

import java.util.ArrayList;

public interface TableData {
    public void LoadTable();
    public ArrayList<FootballPlayer> getTable();
    public ArrayList<String> getHeaders();
    public ArrayList<String> getLine(int n);
    public ArrayList<ArrayList<String>> getLines(int firstLine, int lastLine);
}
