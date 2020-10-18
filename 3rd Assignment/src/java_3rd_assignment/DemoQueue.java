package java_3rd_assignment;

import java.util.Scanner;

public class DemoQueue {

	public static void main(String[] args) {
		@SuppressWarnings("unchecked")
		Queue <Integer> Q = new Queue(Integer.class);
		Scanner input = new Scanner(System.in);
		int ch, val;
		boolean result = true;
		
		while(true)
		{
			System.out.println("Menu\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.IsEmpty\n6.Exit");
			System.out.println("Enter your choice....");
			ch = input.nextInt();
			switch(ch)
			{
				case 1: {
					System.out.println("Enter an element to Enqueue : ");
					val = input.nextInt();
					result = Q.enqueue(val);
					if(result)
					{
						System.out.println("Enqueue operation successfull....");
					}
					else {
						System.out.println("Cannot perform Enqueue operation on full Queue..");
					}
					break;
				}
				case 2: {
					result = Q.dequeue();
					if(result)
					{
						System.out.println("Dequeue operation successfull....");
					}
					else {
						System.out.println("Cannot perform dequeue operation on empty Queue..");
					}
					break;
				}
				case 3: {
					System.out.println("The front element in the Queue is : "+Q.peek());
					break;
				}
				case 4: {
					Q.display();
					break;
				}
				case 5: {
					if(Q.isEmpty())
					{
						System.out.println("Queue is empty.....");
					}
					else {
						System.out.println("Queue is not empty");
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
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	1
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	2
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	3
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	4
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	5
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	2
	Dequeue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	6
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	7
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	1
	Enter an element to Enqueue : 
	8
	Enqueue operation successfull....
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	4
			REAR
	6	7	8	
	
				FRONT
	5	4	3	2	
	
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	3
	The front element in the Queue is : 2
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	5
	Queue is not empty
	Menu
	1.Enqueue
	2.Dequeue
	3.Peek
	4.Display
	5.IsEmpty
	6.Exit
	Enter your choice....
	6
*/
