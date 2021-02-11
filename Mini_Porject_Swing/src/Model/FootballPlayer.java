package Model;

public class FootballPlayer extends Person {
    private int number;
    private String position;

    //parameterised constructor
    public FootballPlayer(int number, int weight, String name, String position, String hometown, String highSchool, Height height) {
        super(weight, name, hometown, highSchool, height);
        this.number = number;
        this.position = position;
    }

    //getter methods

    public int getNumber() {
        return number;
    }

    public String getPosition() {
        return position;
    }

    //setter methods

    public void setNumber(int number) {
        this.number = number;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    @Override
    public String toString()
    {
        final String s = String.valueOf(number)+", "+position;
        return s;
    }


}