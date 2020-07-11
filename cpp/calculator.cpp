//Calculator
#include <iostream>
#include <cmath>
using  namespace std;

int main()
{
    double a,b;
    int ch,x,y;

    cout << "Welcome to Avisek's Calculator" << "\n";
    cout << "Enter you choice of operation : " << "\n";
    cout << "1.Addition\n" << "2.Subtraction\n" << "3.Multiplication\n" << "4.Division\n" << "5.Power\n" << "6.Exit" << "\n";
    cout << "Enter your choice : ";
    cin >> ch;
    if(ch>0 && ch<=4)
    {
        cout << "Enter the first number : ";
        cin >> a;
        cout << "Enter the Second number : ";
        cin >> b;
    }
    else if(ch==5)
    {
        cout << "Enter x and y such that x^y : ";
        cin >> x >> y;
    }

    switch (ch)
    {
    case 1: cout << a << " + " << b << " = " << a+b << "\n";
            break;
    case 2: cout << a << " - " << b << " = " << a-b << "\n";
            break;
    case 3: cout << a << " * " << b << " = " << a*b << "\n";
            break;
    case 4: cout << a << " / " << b << " = " << a/b << "\n";
            break;
    case 5: cout << x << " ^ " << y << " = " << pow(x,y) << "\n";
            break;
    case 6: break;
    
    default:cout << "Enter a valid option...." << "\n";
            break;
    }
    return 0;
}