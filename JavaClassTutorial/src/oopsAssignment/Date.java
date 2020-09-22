package oopsAssignment;
import java.util.Scanner;
public class Date {
	private int day;
	private int month;
	private int year;
	
	//Default constructor
	Date()
	{
		this.day = 01;
		this.month = 01;
		this.year = 1800;
	}
	
	//Parameterized constructor
	Date(int day, int month, int year)
	{
		if(day>0 && day<31 && month>0 && month<=12 && year>0)
		{
			this.day = day;
			this.month = month;
			this.year = year;
		}
		else {
			System.out.println("Please enter a valid date........");
			System.exit(0);
		}
		
	}
	
	//accessor methods
	public int getDay()
	{
		return day;
	}
	public int getMonth()
	{
		return month;
	}
	public int getYear()
	{
		return year;
	}
	
	//mutator methods
	public void setDay(int day)
	{
		if(day>0 && day<32)
		{
			this.day = day;
		}
		else {
			System.out.println("Please enter a valid day........");
			System.exit(0);
		}
	}
	public void setMonth(int month)
	{
		if(month>0 && month<=12)
		{
			this.month = month;
		}
		else {
			System.out.println("Please enter a valid month........");
			System.exit(0);
		}
		
	}
	public void setYear(int year)
	{
		if(year>0 && year<=365)
		{
			this.year = year;	
		}
		else {
			System.out.println("Please enter a valid year........");
			System.exit(0);
		}
	}
	
	//Difference between two dates
	public int dateDifference(Date d1, Date d2)
	{
		int day;
		if(d2.year == d1.year)
		{
			day = 30*(d2.month-d1.month) + (d2.day-d1.day);
		}
		else
		{
			day = (360 - (30*(d1.month-1)+d1.day)) + 360*(d2.year-d1.year - 1) + 30*(d2.month-1) + d2.day;
		}
		return day;
	}
	
	public String toString()
	{
		return day+"/"+month+"/"+year;
	}
	
	//Checking whether two dates are equal
	public boolean isEqual(Date d1, Date d2)
	{
		if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)
		{
			return true;
		}
		return false;
	}
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the day1 : ");
		int day1 = input.nextInt();
		System.out.println("Enter the month1 : ");
		int month1 = input.nextInt();
		System.out.println("Enter the year1 : ");
		int year1 = input.nextInt();
		System.out.println("Enter the day2 : ");
		int day2 = input.nextInt();
		System.out.println("Enter the month2 : ");
		int month2 = input.nextInt();
		System.out.println("Enter the year2 : ");
		int year2 = input.nextInt();
		Date d1 = new Date(day1,month1,year1);
		Date d2 = new Date(day2,month2, year2);
		
		System.out.println("The Date you entered is....\nDate1 : "+d1.toString()+"\nDate2 : "+d2.toString());
		System.out.println("The Difference between two dates : "+d1.dateDifference(d1, d2)+" days.");
		
		if(d1.isEqual(d1, d2))
		{
			System.out.println("Two dates are equal....");
		}
		else {
			System.out.println("The dates are not equal.....");
		}
	}
}

class Driver
{
	
}
