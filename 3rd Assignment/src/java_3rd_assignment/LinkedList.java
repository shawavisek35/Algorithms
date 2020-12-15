package java_3rd_assignment;

public class LinkedList {
	
	Node head;
	
	public class Node{
		
		int data;
		Node next;
		Node(int data)
		{
			this.data = data;
			this.next = null;
		}
	}
	
	public boolean insert(int data)
	{
		if(search(data)!=null)
		{
			return false;
		}
		Node node = new Node(data);
		if(this.head == null)
		{
			this.head = node;
		}
		else {
			Node temp = this.head;
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = node;
		}
		return true;
	}
	
	public Node search(int dataGiven)
	{
		if(this.head == null)
		{
			return null;
		}
		Node temp = this.head;
		while(temp.next != null)
		{
			if(temp.data == dataGiven)
			{
				return temp;
			}
			temp = temp.next;
		}
		if(temp.data == dataGiven)
		{
			return temp;
		}
		return null;
	}
	
	public boolean removeNode(int dataGiven)
	{
		if(this.head == null)
		{
			return false;
		}
		Node n = search(dataGiven);
		if(n==null)
		{
			return false;
		}
		Node temp = this.head;
		while(temp.next!=n)
		{
			temp = temp.next;
		}
		temp.next = n.next;
		return true;
	}
	public void display()
	{
		if(this.head==null)
		{
			System.out.println("Linked list is empty. Try adding first");
		}
		Node temp = this.head;
		while(temp.next!=null)
		{
			System.out.print(temp.data + " --> ");
			temp = temp.next;
		}
		System.out.print(temp.data+"\n");
	}
}
