#include <iostream>
using namespace std;

void stringPermutation(string s, int pointer){
	if(pointer == s.size()-1){
		cout << s << "\n";
		return;
	}
	string newS = s;
	s.insert(s.begin() + pointer+1, ' ');
	stringPermutation(s, pointer+2);
	stringPermutation(newS, pointer+1);
	return;
}

int main(){
	stringPermutation("abcd", 0);
	return 0;
}
