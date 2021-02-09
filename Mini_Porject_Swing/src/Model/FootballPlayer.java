package Model;

public class FootballPlayer {
    private int number, weight;
    private String name, position, hometown, highSchool;
    private Height height;

    //parameterised constructor
    public FootballPlayer(int number, int weight, String name, String position, String hometown, String highSchool, Height height) {
        this.number = number;
        this.weight = weight;
        this.name = name;
        this.position = position;
        this.hometown = hometown;
        this.highSchool = highSchool;
        this.height = height;
    }

    //default constructor
    public FootballPlayer() {
        this.number = 1;
        this.weight = 60;
        this.name = "A";
        this.position = "X";
        this.hometown = "World";
        this.highSchool = "Default";
        this.height = new Height();
    }

    //getter methods

    public int getNumber() {
        return number;
    }

    public int getWeight() {
        return weight;
    }

    public String getName() {
        return name;
    }

    public String getPosition() {
        return position;
    }

    public String getHometown() {
        return hometown;
    }

    public String getHighSchool() {
        return highSchool;
    }

    public double getHeight() {
        return height.convertHeight();
    }

    //setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public void setHometown(String hometown) {
        this.hometown = hometown;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public void setHighSchool(String highSchool) {
        this.highSchool = highSchool;
    }

    public void setHeight(Height height) {
        this.height = height;
    }
}