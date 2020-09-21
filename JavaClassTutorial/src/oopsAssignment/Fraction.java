package oopsAssignment;

public class Fraction {
	private int numerator;
	private int denominator;
	
	//constructor for Fraction class
	Fraction(int numerator, int denominator)
	{
		this.numerator = numerator;
		this.denominator = denominator;
	}
	
	//gcd function to make a valid fraction
	public int gcd(int n1, int n2)
	{
		if(n2==0)
		{
			return n1;
		}
		return gcd(n2, n1%n2);
	}
	
	//accessor methods
	public int getNumerator()
	{
		return this.numerator;
	}
	public int getDenominator()
	{
		return this.denominator;
	}
	
	//mutator methods
	public void setNumerator(int num)
	{
		this.numerator = num;
	}
	public void setDenominator(int den)
	{
		this.denominator = den;
	}
	
	//get the value of fraction
	public double getValue()
	{
		return (double)numerator/denominator;
	}
	
	//getting the value in string format
	public String toString()
	{
		return numerator + "/" + denominator;
	}
	
	//addition operation between two fraction objects
	public Fraction addFraction(Fraction f1, Fraction f2)
	{
		Fraction f3 = new Fraction(f1.numerator*f2.denominator + f2.numerator*f1.denominator, f1.denominator*f2.denominator);
		int Gcd = gcd(f3.numerator, f3.denominator);
		f3.numerator /= Gcd;
		f3.denominator /= Gcd;
		return f3;
	}

	//subtraction operation between two fraction objects
	public Fraction subtractFraction(Fraction f1, Fraction f2)
	{
		Fraction f3 = new Fraction(f1.numerator*f2.denominator - f2.numerator*f1.denominator, f1.denominator*f2.denominator);
		int Gcd = gcd(f3.numerator, f3.denominator);
		f3.numerator /= Gcd;
		f3.denominator /= Gcd;
		return f3;
	}
	
	//multiply operation between two fraction objects
	public Fraction multiplyFraction(Fraction f1, Fraction f2)
	{
		Fraction f3 = new Fraction(f1.numerator*f2.numerator, f1.denominator*f2.denominator);
		int Gcd = gcd(f3.numerator, f3.denominator);
		f3.numerator /= Gcd;
		f3.denominator /= Gcd;
		return f3;
	}
	
	//addition operation between two fraction objects
	public Fraction divideFraction(Fraction f1, Fraction f2)
	{
		Fraction f3 = new Fraction(f1.numerator*f2.denominator, f1.denominator*f2.numerator);
		int Gcd = gcd(f3.numerator, f3.denominator);
		f3.numerator /= Gcd;
		f3.denominator /= Gcd;
		return f3;
	}
}
