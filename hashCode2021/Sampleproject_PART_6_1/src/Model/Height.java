/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;

/**
 *
 * @author bhaum
 */
public class Height {
    private int feet;
    private int inches;

    public int getFeet() {
        return this.feet;
    }

    public void setFeet(int feet) {
        this.feet = feet;
    }

    public int getInches() {
        return this.inches;
    }

    public void setInches(int inches) {
        this.inches = inches;
    }
    

    public Height(int feet, int inches) {
        this.feet = feet;
        this.inches = inches;
    }
    public Height(){
        this.feet=0;
        this.inches= 0;
    }
// method to return a formatted string with feet and inches
    @Override
    public String toString() {
        return String.valueOf(this.feet)+"\'"+String.valueOf(this.inches);
    }
    public double convertHeight(){
        double h;
        if(inches>=10)
        {
            h = Double.valueOf(feet) + Double.valueOf(inches)/100;
        }
        else{
            h = Double.valueOf(feet) + Double.valueOf(inches)/10;
        }
        return h;
    }
    }

