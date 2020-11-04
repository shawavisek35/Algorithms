package OOP_4TH;
import java.util.*;
import java.util.InputMismatchException;

public class Problem6 {
	
	public static String validName(String name) throws InputMismatchException{
		if(name=="Avisek") {
			return name;
		}
		throw new InputMismatchException("Stored name is Avisek Shaw and you entered a different name.");
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a name");
		String s = sc.next();
		try {
			String news = validName(s);
			System.out.println(news);
		}
		catch(InputMismatchException e)
		{
			System.out.println(e);
		}

	}

}
