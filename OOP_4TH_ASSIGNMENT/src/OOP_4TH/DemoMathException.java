package OOP_4TH;
import java.util.*;

public class DemoMathException {

	public static void main(String[] args) throws MathException, OverFlowException, UnderFlowException {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int n = input.nextInt();
		try {
			try {
				throw new MathException(n);
			} catch (MathException e) {
				if(e.n>100)
				{
					throw new OverFlowException("Number must not be greater than 100");
				}
				else if(e.n<1)
				{
					throw new UnderFlowException("Number must not be lass than 1");
				}
			}
		} catch (OverFlowException e) {
			
		}
		catch (UnderFlowException e)
		{
			
		}
		finally {
			input.close();
		}	

	}

}
