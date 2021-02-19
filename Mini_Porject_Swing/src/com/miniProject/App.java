package com.miniProject;
import java.awt.*;
import java.util.Scanner;

import Controller.Controller;
import Model.*;
import View.*;

public class App {

    //Displaying tallest player
//    static void DisplayTallestPlayer(FootballPlayer []players)
//    {
//        int i;
//        for(i=0;i< players.length;i++)
//        {
//            try{
//                System.out.println(players[i].getName()+" is the tallest with a height " + players[i].getHeight2());
//            }
//            catch (Exception e){
//                System.exit(0);
//            }
//
//        }
//    }
    public static void main(String []args)
    {

        Model model = new Model();
        View view = new View();
        Controller controller = new Controller(model, view);

        //Displaying information about offensive line
//        newModel.displayOffensiveLine();

        //Average Weight of the offensive Line
//        newModel.averageWeightOffensiveLine();

//        DisplayTallestPlayer(newModel.findTallestPlayer());
    }
}
