import java.awt.GridLayout;

import javax.swing.*;
public class SwingDemo {

	JFrame f;
	JPanel p;
	public SwingDemo() {
		f = new JFrame();
		p = new JPanel();
		
		for(int i=0;i<100;i++)
		{
			JButton b = new JButton("Button"+i);
			p.add(b);
		}
		p.setLayout(new GridLayout(0, 7));
		f.add(p);
		f.setSize(900, 900);
		f.setVisible(true);
	}
	public static void main(String[] args) {
		
		SwingDemo s = new SwingDemo();

	}

}
