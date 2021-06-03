#include <iostream>
using namespace std;

void printSubSequence(string s, string output){
	if(s.size() == 0){
		cout << output << "\n";
		return;
	}
	printSubSequence(s.substr(1), output + s[0]);
	printSubSequence(s.substr(1), output);
	return;
}

int main(){
	printSubSequence("abcd", " ");
	return 0;
}
