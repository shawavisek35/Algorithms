package java_3rd_assignment;

import java.util.Scanner;

public class DemoLinkedList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int ch, val;
		boolean result = true;
		LinkedList list = new LinkedList();
		while(true)
		{
			System.out.println("Menu\n1.Insert\n2.Remove\n3.Display\n4.Exit");
			System.out.println("Enter your choice....");
			ch = input.nextInt();
			switch(ch)
			{
				case 1: {
					System.out.println("Enter an element to Insert in the Linked list : ");
					val = input.nextInt();
					result = list.insert(val);
					if(result)
					{
						System.out.println("Insertion successfull.........");
					}
					else {
						System.out.println("This is a duplicate element. Try to insert a new element");
					}
					break;
				}
				case 2: {
					System.out.println("Enter the value of the node you want to remove : ");
					val = input.nextInt();
					result = list.removeNode(val);
					if(result)
					{
						System.out.println("Remove operation successfull....");
					}
					else {
						System.err.println("Cannot perform remove operation\n.Possible causes : \n1.Your stack is empty or \n2.Element not found.");
					}
					break;
				}
				case 3: {
					list.display();
					break;
				}
				case 4: {
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
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	1
	Enter an element to Insert in the Linked list : 
	1
	Insertion successfull.........
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	1
	Enter an element to Insert in the Linked list : 
	2
	Insertion successfull.........
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	1
	Enter an element to Insert in the Linked list : 
	3
	Insertion successfull.........
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	1
	Enter an element to Insert in the Linked list : 
	4
	Insertion successfull.........
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	3
	1 --> 2 --> 3 --> 4
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	2
	Enter the value of the node you want to remove : 
	3
	Remove operation successfull....
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	3
	1 --> 2 --> 4
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	1
	Enter an element to Insert in the Linked list : 
	8
	Insertion successfull.........
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	3
	1 --> 2 --> 4 --> 8
	Menu
	1.Insert
	2.Remove
	3.Display
	4.Exit
	Enter your choice....
	4
*/
