package oopsAssignment;
import java.util.Scanner;

public class Shape {
	
	//calculating area of Triangle
	public double calcArea(double side1, double side2, double side3)
	{
		double area = 0;
		if(side1+side2>side3 || side1+side3>side2 || side2+side3>side1)
		{
			double s = (side1+side2+side3)/2;
			area = Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
		}
		return area;
	}
	
	//calculating area of square
	public double calcArea(double side)
	{
		return Math.pow(side, 2);
	}
	
	//calculating area of Rectangle
	public double calcArea(double length, double breadth)
	{
		return length*breadth;
	}

}

class DriverShape
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int ch;
		Shape sp = new Shape();
		while(true) {
			System.out.println("Menu..\n1.Triangle Area\n2.Square Area\n3.Rectangle Area\n4.Exit");
			System.out.println("Enter your choice : ");
			ch = input.nextInt();
			switch (ch) {
			case 1: {
				System.out.println("Enter side 1 : ");
				double side1 = input.nextDouble();
				System.out.println("Enter side 2 : ");
				double side2 = input.nextDouble();
				System.out.println("Enter side 3 : ");
				double side3 = input.nextDouble();
				System.out.println("The area of the given triangle : "+sp.calcArea(side1, side2, side3));
				break;
			}
			
			case 2 : {
				System.out.println("Enter side : ");
				double side = input.nextDouble();
				System.out.println("The area of the given Square is : "+sp.calcArea(side));
				break;
			}
			
			case 3 : {
				System.out.println("Enter length : ");
				double length = input.nextDouble();
				System.out.println("Enter breadth : ");
				double breadth = input.nextDouble();
				System.out.println("The area of the given Rectangle is : "+sp.calcArea(length, breadth));
				break;
			}
			case 4 : {
				System.exit(0);
				input.close();
			}
			default:
				throw new IllegalArgumentException("Unexpected value: " + ch);
			}
		}

	}
}

/*
 * Output =>
 * Menu..
	1.Triangle Area
	2.Square Area
	3.Rectangle Area
	4.Exit
	Enter your choice : 
	1
	Enter side 1 : 
	3
	Enter side 2 : 
	4
	Enter side 3 : 
	5
	The area of the given triangle : 6.0
	Menu..
	1.Triangle Area
	2.Square Area
	3.Rectangle Area
	4.Exit
	Enter your choice : 
	2
	Enter side : 
	25
	The area of the given Square is : 625.0
	Menu..
	1.Triangle Area
	2.Square Area
	3.Rectangle Area
	4.Exit
	Enter your choice : 
	3
	Enter length : 
	40
	Enter breadth : 
	15
	The area of the given Rectangle is : 600.0
	Menu..
	1.Triangle Area
	2.Square Area
	3.Rectangle Area
	4.Exit
	Enter your choice : 
	4
*/
