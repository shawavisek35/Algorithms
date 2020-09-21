package oopsAssignment;
import java.util.Scanner;

public class Room {
	 private double height, width, breadth;
	 
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
	 public void setHeight(double h)
	 {
		 this.height = h;
	 }
	 public void setWidth(double w)
	 {
		 this.width = w;
	 }
	 public void setBreadth(double b)
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
		Room newRoom = new Room();
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the height of the room : ");
		double h = input.nextDouble();
		System.out.println("Enter the width of the room : ");
		double w = input.nextDouble();
		System.out.println("Enter the breadth of the room : ");
		double b = input.nextDouble();
		newRoom.setHeight(h);
		newRoom.setBreadth(b);
		newRoom.setWidth(w);
		
		System.out.println("The volume of the given room is : "+ newRoom.claculateVolume());
		input.close();
	}
}
