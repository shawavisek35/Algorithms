package java_3rd_assignment;
import java.util.*;
public class DemoTriangle {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter side 1 of the triangle : ");
		double s1 = input.nextDouble();
		System.out.println("Enter side 2 of the triangle : ");
		double s2 = input.nextDouble();
		System.out.println("Enter side 3 of the triangle : ");
		double s3 = input.nextDouble();
		
		Triangle myTriangle = new Triangle("Blue", 3.0, s1, s2, s3);
		System.out.println("The area of the triangle : " + myTriangle.findArea());
		System.out.println("The perimeter of the triangle : " + myTriangle.findPerimeter());
		input.close();
	}

}

/*
 * Output => 
 * 	Enter side 1 of the triangle : 
	3
	Enter side 2 of the triangle : 
	4
	Enter side 3 of the triangle : 
	5
	The area of the triangle : 6.0
	The perimeter of the triangle : 12.0
 * */
