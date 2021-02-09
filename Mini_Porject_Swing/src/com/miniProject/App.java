package com.miniProject;
import java.util.Scanner;
import Model.*;

public class App {

    static void DisplayTallestPlayer(FootballPlayer []players)
    {
        int i;
        for(i=0;i< players.length;i++)
        {
            try{
                System.out.println(players[i].getName()+" is the tallest with a height " + players[i].getHeight2());
            }
            catch (Exception e){
                System.exit(0);
            }

        }
    }
    public static void main(String []args)
    {

        Model newModel;
        newModel = new Model();

        DisplayTallestPlayer(newModel.findTallestPlayer());
    }
}
