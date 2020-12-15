package OOP_4TH;

public class MathException extends Exception {
	int n;
	public MathException(int n)
	{
		super();
		this.n = n;
	}
}

class OverFlowException extends MathException
{
	public OverFlowException(String s)
	{
		super(100);
		System.out.println(s);
	}
}

class UnderFlowException extends MathException
{
	public UnderFlowException(String s)
	{
		super(1);
		System.out.println(s);
	}
}