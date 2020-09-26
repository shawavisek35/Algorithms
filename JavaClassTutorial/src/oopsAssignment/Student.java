package oopsAssignment;
import java.util.Scanner;

public class Student {
	
	private String name;
	private double maths, english, algorithms, os, ai;
	
	//Constructor
	Student(String name, double maths, double english, double algorithms, double os, double ai)
	{
		this.name = name;
		this.maths = maths;
		this.english = english;
		this.algorithms = algorithms;
		this.os = os;
		this.ai = ai;
	}
	
	//accessor methods
	public String getName()
	{
		return name;
	}
	public double getMaths()
	{
		return maths;
	}
	public double getEnglish()
	{
		return english;
	}
	public double getAlgorithms()
	{
		return algorithms;
	}
	public double getOs()
	{
		return os;
	}
	public double getAi()
	{
		return ai;
	}
	
	//mutator methods
	public void setName(String name)
	{
		this.name = name;
	}
	public void setMaths(double maths)
	{
		this.maths = maths;
	}
	public void setEnglish(double english)
	{
		this.english = english;
	}
	public void setAlgorithms(double algorithms)
	{
		this.algorithms = algorithms;
	}
	public void setOs(double os)
	{
		this.os = os;
	}
	public void setAi(double ai)
	{
		this.ai = ai;
	}
	
	//total marks calculation
	public double getTotalMarks()
	{
		return maths+english+algorithms+os+ai;
	}
	
	//Average marks calculation
	public double average()
	{
		return getTotalMarks()/5;
	}
	
	//Calculating letter grade
	public char getLetterGrade()
	{
		double average = average();
		if(average>90 && average<=100)
		{
			return 'O';
		}
		else if(average>80 && average<=89)
		{
			return 'E';
		}
		else if(average>70 && average<=79)
		{
			return 'A';
		}
		else if(average>60 && average<=69)
		{
			return 'B';
		}
		else if(average>50 && average<=59)
		{
			return 'C';
		}
		else if(average>40 && average<=49)
		{
			return 'D';
		}
		else
		{
			return 'F';
		}
	}
	
	public String toString()
	{
		return name+"\t"+maths+"\t"+english+"\t"+algorithms+"\t"+os+"\t"+ai;
	}

}

class DriverStudent
{
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter your name : ");
		String name = input.nextLine();
		System.out.println("Enter your marks in Maths : ");
		double marks1 = input.nextDouble();
		System.out.println("Enter your marks in English : ");
		double marks2 = input.nextDouble();
		System.out.println("Enter your marks in Algorithms : ");
		double marks3 = input.nextDouble();
		System.out.println("Enter your marks in OS : ");
		double marks4 = input.nextDouble();
		System.out.println("Enter your marks in AI : ");
		double marks5 = input.nextDouble();
		
		Student st = new Student(name, marks1, marks2, marks3, marks4, marks5);
		System.out.println("-----------------------Marks sheet--------------------");
		System.out.println("Name\tMaths\tEnglish\tAlgorithms\tOS\tAI");
		System.out.println(st.toString());
		System.out.println("Total Marks : "+st.getTotalMarks());
		System.out.println("Average Marks : "+st.average());
		System.out.println("Grade : "+st.getLetterGrade());
		input.close();

	}

}

/*
 * Output =>
 * Enter your name : 
	Avisek
	Enter your marks in Maths : 
	98
	Enter your marks in English : 
	94
	Enter your marks in Algorithms : 
	100
	Enter your marks in OS : 
	99
	Enter your marks in AI : 
	97
	-----------------------Marks sheet--------------------
	Name	Maths	English	Algorithms	OS	    AI
	Avisek	98.0	94.0	100.0	    99.0	97.0
	Total Marks : 488.0
	Average Marks : 97.6
	Grade : O
*/
