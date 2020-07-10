#include <iostream>
using namespace std;

void increment();

int main()
{
    string name;
    int age;
    double weight;

    cout << "Enter Your name : ";

    //using getline to input string because cin will terminate while encountering a whitespace or a tab space
    getline(cin,name);
    cout << name << " please enter your age : ";
    cin >> age;
    cout << name << " what is your weight : ";
    cin >> weight;
    cout << "My name is : " << name << "\n" << "I am " << age << " years old." << "\n" << "My weight is : " << weight << "\n";
    increment();
    increment();
    increment();
    increment();

    return 0;
}

void increment()
{
    int i=1;
    cout << i << "\n";
    i++;
}
