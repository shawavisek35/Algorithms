/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;

import Model.FootballPlayer;

/**
 *
 * @author bhaum
 */
public class OffensiveLine {
    
   FootballPlayer []player;
   //constructor
   public OffensiveLine(FootballPlayer []players){
       this.player=players;
       //tostring method.  
   }

    @Override
    public String toString() {
        String s="";
        for(int i=0;i<3;i++){
            s+=player[i].getNumber()+", ";
            s+=player[i].getName()+", ";
            s+=player[i].getHeight()+", ";
            s+=player[i].getPosition()+", ";
            s+=player[i].getWeight()+",";
            s+=player[i].getHighSchool()+", ";
            s+=player[i].getHometown()+", ";
            s+=";";
        }
        return s;
    }
   //Average weight of the offensiveline
    public double average_weight(){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=player[i].getWeight();
        }
        return sum/3;
    }
}
