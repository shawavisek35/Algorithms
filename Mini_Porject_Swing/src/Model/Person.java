package Model;

public class Person {
    protected int weight;
    protected String name, hometown, highSchool;
    protected Height height;

    public Person(int weight, String name, String hometown, String highSchool, Height height) {
        this.weight = weight;
        this.name = name;
        this.hometown = hometown;
        this.highSchool = highSchool;
        this.height = height;
    }

    //Getter methods
    public int getWeight() {
        return weight;
    }

    public String getName() {
        return name;
    }

    public String getHometown() {
        return hometown;
    }

    public String getHighSchool() {
        return highSchool;
    }

    public double getHeight2() {
        return height.convertHeight();
    }

    public String getHeight() { return height.toString(); }

    //Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public void setHometown(String hometown) {
        this.hometown = hometown;
    }

    public void setHighSchool(String highSchool) {
        this.highSchool = highSchool;
    }

    public void setHeight(Height height) {
        this.height = height;
    }

    //toString method
    @Override
    public String toString()
    {
        final String s = name + ", " + String.valueOf(weight) + ", " + height.toString() + ", " + hometown + ", " + highSchool;
        return s;
    }
}
