package java_3rd_assignment;
import java.util.*;
public class DemoStack {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Stack <Integer> st = new Stack <Integer>(Integer.class);
		Scanner input = new Scanner(System.in);
		int ch, val;
		boolean result = true;
		
		while(true)
		{
			System.out.println("Menu\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.IsEmpty\n6.Exit");
			System.out.println("Enter your choice....");
			ch = input.nextInt();
			switch(ch)
			{
				case 1: {
					System.out.println("Enter an element to push in the stack : ");
					val = input.nextInt();
					result = st.push(val);
					if(result)
					{
						System.out.println("Push operation successfull....");
					}
					else {
						System.out.println("Cannot perform push operation on full stack..");
					}
					break;
				}
				case 2: {
					result = st.pop();
					if(result)
					{
						System.out.println("Pop operation successfull....");
					}
					else {
						System.out.println("Cannot perform Pop operation on empty stack..");
					}
					break;
				}
				case 3: {
					System.out.println("The topmost element in the stack is : "+st.peek());
					break;
				}
				case 4: {
					st.display("TOP");
					break;
				}
				case 5: {
					if(st.isEmpty())
					{
						System.out.println("Stack is empty.....");
					}
					else {
						System.out.println("Stack is not empty");
					}
					break;
				}
				case 6: {
					System.exit(0);
					input.close();
				}
				default : {
					System.err.println("Invalid Input....Enter your choice from the above menu only");
				}
					
			}
		}
	}

}

/*
 * Output =>
 * 	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to push in the stack : 
	1
	Push operation successfull....
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to push in the stack : 
	2
	Push operation successfull....
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to push in the stack : 
	3
	Push operation successfull....
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to push in the stack : 
	4
	Push operation successfull....
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	4
				TOP
	1	2	3	4	
	
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	2
	Pop operation successfull....
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	4
			TOP
	1	2	3	
	
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	3
	The topmost element in the stack is : 3
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	5
	Stack is not empty
	Menu
	1.Push
	2.Pop
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	6
*/
