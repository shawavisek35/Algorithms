package java_3rd_assignment;
import java.util.*;

public class DemoRectangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the height : ");
		double h = input.nextDouble();
		System.out.println("Enter the Width : ");
		double w = input.nextDouble();
		Rectangle newRectangle = new Rectangle(h, w);
		System.out.println("Enter the Depth : ");
		double d = input.nextDouble();
		Cuboid newCuboid = new Cuboid(h,w,d);
		System.out.println("The surface area of Rectangle is : " +newRectangle.computeSurfaceArea());
		System.out.println("The surface area of Cuboid is : " +newCuboid.computeSurfaceArea());
		input.close();
	}

}

/*
 * Output =>
 * 	Enter the height : 
	20
	Enter the Width : 
	30
	Enter the Depth : 
	40
	The surface area of Rectangle is : 600.0
	The surface area of Cuboid is : 5200.0
 * */
