#include <iostream>
using namespace std;

int main()
{
    int length_of_string;
    string substring;
    int starting_substring;
    char charString[20];

    string activity = "CPP is a very interesting and efficient programming language.";
    length_of_string = activity.length();
    cout << "Length of the given string : " << length_of_string << "\n";

    substring = activity.substr(length_of_string-3,3);
    cout << "The substring from index " << length_of_string-6 <<" to 3 characters : " << substring << "\n";

    starting_substring = activity.find("dckjn");
    cout << starting_substring << "\n";

    activity.append("Hello");
    cout << activity << "\n";

    cout << activity.at(4) << "\n";

    activity.copy(charString,5);
    cout << string(charString) << "\n";
    return 0;
}