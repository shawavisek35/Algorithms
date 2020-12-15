package java_3rd_assignment;

public abstract class GeometricObject {
	private String color;
	private double weight;
	
	GeometricObject(String color, double weight)
	{
		this.color = "White";
		this.weight = 1.0;
	}
	
	//getter functions
	public String getColor()
	{
		return color;
	}
	public double weight()
	{
		return weight;
	}
	
	public abstract double findArea();
	public abstract double findPerimeter();
}
