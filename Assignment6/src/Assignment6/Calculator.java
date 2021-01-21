package Assignment6;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.applet.Applet;

public class Calculator extends Applet implements ActionListener {

    TextField inp;
    private int i;
    private String num1="", num2="", op="", answer="";

    public void init()
    {
        setBackground(Color.BLACK);
        setLayout(null);

        inp = new TextField();
        inp.setBounds(150,100,500,50);
        add(inp);
        num1=num2=op=answer="";

        //Adding buttons
        Button button[] = new Button[10];
        for(i=0;i<10;i++)
        {

            button[i] = new Button(String.valueOf(9-i));
            button[i].setBackground((Color.WHITE));
            button[i].setBounds(150+((i%5)*100),150+((i/5)*50),100,50);
            add(button[i]);
            button[i].addActionListener(this);
        }

        //operator buttons
        Button operator[] = new Button[5];
        operator[0]=new Button("/");
        operator[1]=new Button("*");
        operator[2]=new Button("-");
        operator[3]=new Button("+");
        operator[4]=new Button("=");
        for(i=0;i<5;i++)
        {
            operator[i].setBackground(Color.WHITE);
            operator[i].setBounds(150+((i%5)*100),250,100,50);
            this.add(operator[i]);
            operator[i].addActionListener(this);
        }

        //answer button
        Button result = new Button("Ans");
        result.setBackground(Color.white);
        result.setBounds(400,300,250,50);
        add(result);
        result.addActionListener(this);

        //clear button
        Button clr = new Button("C");
        clr.setBackground(Color.WHITE);
        clr.setBounds(150,300,250,50);
        add(clr);
        clr.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent actionEvent) {
        String button = actionEvent.getActionCommand();
        char ch = button.charAt(0);
        if(ch>='0' && ch<='9')
        {
            if (!op.equals(""))
                num2 = num2 + button;
            else
                num1 = num1 + button;
            inp.setText(num1+op+num2);
        }
        else if(button.equals("Ans"))
        {
            inp.setText(num1+op+num2);
        }
        else if(ch=='C')
        {
            num1 = op = num2 = "";
            inp.setText("");
        }
        else if (ch =='=')
        {
            if(!num1.equals("") && !num2.equals(""))
            {
                double temp=0;
                double n1=Double.parseDouble(num1);
                double n2=Double.parseDouble(num2);
                if(n2==0 && op.equals("/"))
                {
                    inp.setText("Math Error");
                    num1=op = num2 = "";
                }
                else
                {
                    if (op.equals("+"))
                        temp = n1 + n2;
                    else if (op.equals("-"))
                        temp = n1 - n2;
                    else if (op.equals("/"))
                        temp = n1/n2;
                    else
                        temp = n1*n2;
                    inp.setText(num1+op+num2+" = "+temp);
                    num1 = Double.toString(temp);
                    op = num2 = "";
                }
            }
            else
            {
                num1 = op = num2 = "";
                inp.setText("Enter two operands first");
            }
        }
        else
        {
            if(num1.equals(""))
            {
                num1="0";
            }
            op = button;
            inp.setText(num1+op+num2);
        }
    }
}
