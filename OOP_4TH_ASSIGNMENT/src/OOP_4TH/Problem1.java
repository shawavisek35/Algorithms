package OOP_4TH;
import java.util.*;
public class Problem1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int x, y;
		System.out.println("Enter 1st value : ");
		x = input.nextInt();
		System.out.println("Enter 2nd value : ");
		y = input.nextInt();
		
		try {
			System.out.println("x/y : "+ x/y);
		} catch (ArithmeticException ae) {
			System.err.println("Cannot be divided by zero");
		}
		input.close();
	}

}

/*
 * Output => 
 * 	Enter 1st value : 
	10
	Enter 2nd value : 
	0
	Cannot be divided by zero
*/
