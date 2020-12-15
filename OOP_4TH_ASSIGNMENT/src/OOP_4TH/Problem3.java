package OOP_4TH;

public class Problem3 {

	public static void main(String[] args) throws Exception, ArrayIndexOutOfBoundsException {
		// TODO Auto-generated method stub
		int arr[] = new int[10];
		for(int i=0;i<9;i++)
		{
			arr[i] = i+1;
		}
		try {
			try {
				arr[15] = 16;
			} catch (Exception e) {
				throw new ArrayIndexOutOfBoundsException();
			}
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println(e);
		}

	}

}

/*
 * Output => 
 * java.lang.ArrayIndexOutOfBoundsException
 */
