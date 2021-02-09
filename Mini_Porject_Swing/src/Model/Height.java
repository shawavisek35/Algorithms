package Model;

public class Height {
    private int feet;
    private int inches;

    //parameterised constructor
    public Height(int feet, int inches)
    {
        this.feet = feet;
        this.inches = inches;
    }

    //Default constructor
    public Height()
    {
        this.feet = 5;
        this.inches = 2;
    }

    //getter methods
    public int getFeet()
    {
        return this.feet;
    }

    public int getInches()
    {
        return this.inches;
    }

    //setter methods
    public void setFeet(int feet)
    {
        this.feet = feet;
    }
    public void setInches(int inches)
    {
        this.inches = inches;
    }

    //method to return a formatted string with feet and inches
    public String toString()
    {
        return String.valueOf(this.feet)+"\'"+String.valueOf(this.inches);
    }

    public double convertHeight()
    {
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
