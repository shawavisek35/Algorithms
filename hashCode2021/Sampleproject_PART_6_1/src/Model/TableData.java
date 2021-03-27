/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;

import java.util.ArrayList;

public interface TableData {
    public void LoadTable();
    public ArrayList<FootballPlayer> getTable();
    public ArrayList<String> getHeaders();
    public ArrayList<String> getLine(int n);
    public ArrayList<ArrayList<String>> getLines(int firstLine, int lastLine);
}
