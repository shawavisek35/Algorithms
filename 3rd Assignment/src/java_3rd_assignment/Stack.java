package java_3rd_assignment;
import java.lang.reflect.Array;
public class Stack <T>{
	private T []arr;
	private int max;
	private int top;
	
	@SuppressWarnings("unchecked")
	public Stack(Class <T> component)
	{
		this.top = -1;
		this.max = 10;
		arr = (T[])Array.newInstance(component, max);
	}
	
	@SuppressWarnings("unchecked")
	public Stack(Class <T> component, int max)
	{
		this.top = -1;
		this.max = max;
		arr = (T[])Array.newInstance(component, max);
	}
	
	public boolean isEmpty()
	{
		if(this.top == -1)
		{
			return true;
		}
		return false;
	}
	private boolean isFull()
	{
		if(this.top == max-1)
		{
			return true;
		}
		return false;
	}
	
	public T peek()
	{
		if(this.isEmpty())
		{
			System.out.println("The stack is empty..");
			System.exit(0);
		}
		return this.arr[this.top];
	}
	
	public boolean pop()
	{
		if(this.isEmpty())
		{
			return false;
		}
		this.top --;
		return true;
	}
	
	public boolean push(T element)
	{
		if(this.isFull())
		{
			return false;
		}
		this.top ++;
		this.arr[this.top] = element;
		return true;
	}
	
	public void display()
	{
		if(this.isEmpty())
		{
			System.out.println("Stack is empty. Insert some element");
		}
		String s = "";
		for(int i=0;i<this.top;i++)
		{
			s += "\t";
		}
		s += "TOP";
		System.out.println(s);
		for(int i=0;i<=this.top;i++)
		{
			System.out.print(this.arr[i]+"\t");
		}
		System.out.println("\n");
	}
	
}
