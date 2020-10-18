package java_3rd_assignment;

public class Rectangle {

	protected double height;
	protected double width;
	protected double surfaceArea;

	Rectangle(double height, double width)
	{
		this.height = height;
		this.width = width;
	}
	
	public double computeSurfaceArea()
	{
		surfaceArea = height*width;
		return surfaceArea;
	}

}
