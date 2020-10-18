package java_3rd_assignment;

public class Triangle extends GeometricObject{
	private double s1;
	private double s2;
	private double s3;
	Triangle(String color, double weight, double s1, double s2, double s3)
	{
		super(color, weight);
		this.s1 = s1;
		this.s2 = s2;
		this.s3 = s3;
	}
	
	@Override
	public double findArea() {
		if(s1+s2<s3 || s1+s3<s2 || s2+s3<s1)
		{
			System.out.println("Not a valid triangle. Try entering other values for the sides");
			System.exit(0);
		}
		double s = findPerimeter()/2;
		double area = Math.sqrt(s*(s-s1)*(s-s2)*(s-s3));
		return area;
	}
	
	@Override
	public double findPerimeter() {
		return s1+s2+s3;
	}

}
