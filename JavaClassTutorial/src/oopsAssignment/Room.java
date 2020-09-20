package oopsAssignment;

public class Room {
	 private double height, width, breadth;
	 
	 //parameterized constructor
	 public Room(double h, double w, double b)
	 {
		 this.height = h;
		 this.width = w;
		 this.breadth = b;
	 }
	 
	 //getter methods
	 public double getHeight()
	 {
		 return height;
	 }
	 public double getWidth()
	 {
		 return width;
	 }
	 public double getBreadth()
	 {
		 return breadth;
	 }
	 
	 //setter methods
	 public void setHeight(int h)
	 {
		 this.height = h;
	 }
	 public void setWidth(int w)
	 {
		 this.width = w;
	 }
	 public void setBreadth(int b)
	 {
		 this.breadth = b;
	 }
	 
	 public double claculateVolume()
	 {
		 double volume = height * width * breadth;
		 return volume;
	 }
}

class TestRoom {
	public static void main(String args[])
	{
		//creating an object
		Room newRoom = new Room(45.0, 33.3, 100.0);
	}
}
