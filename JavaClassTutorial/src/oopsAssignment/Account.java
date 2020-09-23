package oopsAssignment;

public class Account {
	
	private double balance_amount;
	private String name;
	private int account_number;
	private char account_type;
	
	//parameterized constructor
	Account(String name, double balance, int account_number, char account_type)
	{
		this.name = name;
		this.balance_amount = balance;
		this.account_number = account_number;
		this.account_type = account_type;
	}
	
	//accessor methods
	public String getName()
	{
		return name;
	}
	public double getBalance()
	{
		return balance_amount;
	}
	public char getAccountType()
	{
		return account_type;
	}
	public int getAccountNumber()
	{
		return account_number;
	}
	
	//mutator methods
	public void setName(String name)
	{
		this.name = name;
	}
	public void setBalance(double balance)
	{
		this.balance_amount = balance;
	}
	public void setAccountNumber(int account_number)
	{
		this.account_number = account_number;
	}
	public void setAccountType(char accountType)
	{
		this.account_type = accountType;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
