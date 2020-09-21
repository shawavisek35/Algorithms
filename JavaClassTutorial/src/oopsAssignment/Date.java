package oopsAssignment;

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
		if(day>0 && day<32 && month>0 && month<=12 && year>0 && year<=365)
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
		int day = (d2.day-d1.day) + 30*(d2.month-d1.month) + 365*(d2.year-d1.year);
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
}
