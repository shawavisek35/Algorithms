package OOP_4TH;

public class Problem2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[] = new int[10];
		for(int i=0;i<9;i++)
		{
			arr[i] = i+1;
		}
		try {
			arr[15] = 16;
		}
		catch(ArrayIndexOutOfBoundsException arre)
		{
			System.err.println("Cannot assign value to the array index 15 which is out of bound");
		}
	}

}

/*
 * Output => 
 * Cannot assign value to the array index 15 which is out of bound
 */
