package java_3rd_assignment;

public class Queue <T>{
	
	Stack <T> st1, st2;
	
	Queue(Class <T> component)
	{
		st1 = new Stack <T>(component);
		st2 = new Stack <T>(component);
	}
	
	
	public boolean enqueue(T data)
	{
		boolean answer = st1.push(data);
		return answer;
	}
	
	
	public boolean dequeue()
	{
		if(st1.isEmpty() && st2.isEmpty())
		{
			return false;
		}
		else {
			if(st2.isEmpty())
			{
				while(!st1.isEmpty())
				{
					st2.push(st1.peek());
					st1.pop();
				}
			}
			st2.pop();
			return true;
		}
	}
	
	public T peek()
	{
		if(st1.isEmpty() && st2.isEmpty())
		{
			return null;
		}
		else {
			if(st2.isEmpty())
			{
				while(!st1.isEmpty())
				{
					st2.push(st1.peek());
					st1.pop();
				}
			}
			T answer = st2.peek();
			return answer;
		}
	}
	
	public boolean isEmpty()
	{
		if(st1.isEmpty() && st2.isEmpty())
		{
			return true;
		}
		return false;
	}
	
	public void display()
	{
		if(st1.isEmpty() && st2.isEmpty())
		{
			System.out.println("Queue is empty....");
		}
		
		st1.display("REAR");
		st2.display("FRONT");
	}
}
