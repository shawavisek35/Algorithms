/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author bhaum
 */
import Model.*;
import View.*;
import Controller.*;
public class app {
    public static void main(String args[]){
        Model m1= new Model();
        View v1= new View();
        Controller c1= new Controller(m1,v1);
        
    }
    
}
