package oopsAssignment;
import java.util.*;

public class Account {
	
	static int transactions=0;
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
	
	//method to withdraw money
	public void withDrawMoney(double amount)
	{
		if(this.balance_amount<amount)
		{
			System.out.println("You do not have suffucient balance to withdraw this amount of money.....");
		}
		else {
			Account.transactions ++;
			this.balance_amount -= amount;
		}
	}
	
	//returning object as a string
	public String toString()
	{
		return name+"\t"+account_number+"\t"+account_type+"\t"+balance_amount;
	}
	
	//method to deposit money
	public void depositMoney(double amount)
	{
		Account.transactions ++;
		this.balance_amount += amount;
	}

	
}

class DriverAccount
{
	public static void main(String[] args) {
		
		double amount;
		Scanner input = new Scanner(System.in);
		System.out.println("-------------Welcome to Avisek's Bank----------------");
		Account ac = new Account("Avisek", 10000, 123456789, 'S');
		System.out.println("Your Bank Account Summary : \n Name\tAccount Number\tAccount Type\tBalance");
		System.out.println(ac.toString());
		while(true) {
			System.out.println("What service would you like to use today......");
			System.out.println("1.Get Account Details\n2. Withdraw Money\n3.Deposit Money\n4.Change Name\n5.Change Account Type\n6. Exit");
			System.out.println("Enter your choice : ");
			int ch = input.nextInt();
			switch(ch)
			{
				case 1 : {
					System.out.println("Your Bank Account Summary : \n Name\tAccount Number\tAccount Type\tBalance");
					System.out.println(ac.toString());
					System.out.println("You have done "+Account.transactions +" Transactions till now.");
					break;
				}
				case 2 : {
					System.out.println("Enter amount to withdraw..");
					amount = input.nextDouble();
					ac.withDrawMoney(amount);
					System.out.println("Your Current Balance is : "+ac.getBalance());
					break;
				}
				case 3 : {
					System.out.println("Enter amount to deposit..");
					amount = input.nextDouble();
					ac.depositMoney(amount);
					System.out.println("Your Current Balance is : "+ac.getBalance());
					break;
				}
				case 4 : {
					System.out.println("What name would you like to change to : ");
					String name = input.next();
					ac.setName(name);
					break;
				}
				case 5 : {
					char accountT = ac.getAccountType()=='S' ? 'C' : 'S';
					System.out.println("Your current Account Type is : "+ac.getAccountType());
					System.out.println("Wnat to change you account type to "+ accountT +": [yes/no] : ");
					String n = input.next();
					if(n=="yes" || n=="y")
					{
							ac.setAccountType(accountT);
				}
					break;
				}
				case 6 : {
					System.out.println("Thanks for using our service..........");
					System.exit(0);
					input.close();
				}
				default : {
					System.err.println("Enter a valid option.....");
				}
			}
		}

	}

}

/*
 	Output => 
 	-------------Welcome to Avisek's Bank----------------
	Your Bank Account Summary : 
	 Name	Account Number	Account Type	Balance
	Avisek	123456789	S	10000.0
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	2
	Enter amount to withdraw..
	500
	Your Current Balance is : 9500.0
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	3
	Enter amount to deposit..
	1000
	Your Current Balance is : 10500.0
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	1
	Your Bank Account Summary : 
	 Name	Account Number	Account Type	Balance
	Avisek	123456789	S	10500.0
	You have done 2 Transactions till now.
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	4
	What name would you like to change to : 
	Aayush
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	1
	Your Bank Account Summary : 
	 Name	Account Number	Account Type	Balance
	Aayush	123456789	S	10500.0
	You have done 2 Transactions till now.
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	5
	Your current Account Type is : S
	Wnat to change you account type to C: [yes/no] : 
	yes
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	1
	Your Bank Account Summary : 
	 Name	Account Number	Account Type	Balance
	Aayush	123456789	S	10500.0
	You have done 2 Transactions till now.
	What service would you like to use today......
	1.Get Account Details
	2. Withdraw Money
	3.Deposit Money
	4.Change Name
	5.Change Account Type
	6. Exit
	Enter your choice : 
	6
	Thanks for using our service..........
 */
