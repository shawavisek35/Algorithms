package Model;

import java.util.ArrayList;

public class FootballPlayer extends Person implements TableMember{
    private int number;
    private String position;
    private ArrayList<String> Attributes = new ArrayList<>();
    private ArrayList<String> AttributeNames = new ArrayList<>();

    //parameterised constructor
    public FootballPlayer(Height height, String highSchool, String hometown, String name, int number, String position, int weight) {
        super(weight, name, hometown, highSchool, height);
        this.number = number;
        this.position = position;

        AttributeNames.add("number");
        AttributeNames.add("Position");
        AttributeNames.add("Name");
        AttributeNames.add("Height");
        AttributeNames.add("Weight");
        AttributeNames.add("Hometown");
        AttributeNames.add("HighSchool");

        Attributes.add(name);
        Attributes.add(height.toString());
        Attributes.add(String.valueOf(weight));
        Attributes.add(hometown);
        Attributes.add(highSchool);
        Attributes.add(String.valueOf(number));
        Attributes.add(position);
    }

    public FootballPlayer() {
        super();
        this.number=1;
        this.position = "Center";
        AttributeNames.add("Number");
        AttributeNames.add("Position");
        AttributeNames.add("Name");
        AttributeNames.add("Height");
        AttributeNames.add("Weight");
        AttributeNames.add("Hometown");
        AttributeNames.add("HighSchool");
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
        final String s = String.valueOf(number)+";"+position;
        return s+";"+super.toString();
    }


    @Override
    public String getAttribute(int n) {
        return Attributes.get(n);
    }

    @Override
    public ArrayList<String> getAttributes() {
        return Attributes;
    }

    @Override
    public String getAttributeName(int n) {
        return AttributeNames.get(n);
    }

    @Override
    public ArrayList<String> getAttributeNames() {
        return AttributeNames;
    }
}