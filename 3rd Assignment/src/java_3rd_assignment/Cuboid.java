package java_3rd_assignment;

public class Cuboid extends Rectangle {
	private double depth;
	
	Cuboid(double height, double width, double depth)
	{
		super(height, width);
		this.depth = depth;
	}
	
	@Override
	public double computeSurfaceArea()
	{
		surfaceArea = 2*(height*width + width*depth + depth*height);
		return surfaceArea;
	}
}
