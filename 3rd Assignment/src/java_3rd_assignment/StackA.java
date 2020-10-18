package java_3rd_assignment;

public interface StackA <D> {
	public D peek();
	public boolean pop();
	public boolean push(D element);
	public boolean isEmpty();
	public boolean isFull();
}
