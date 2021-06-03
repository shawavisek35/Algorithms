#include <iostream>
using namespace std;

void stringPermutation(string s, int pointer){
	if(pointer == s.size()-1){
		cout << s << "\n";
		return;
	}
	for(int i=pointer; i<s.size(); i++){
		swap(s[pointer], s[i]);
		stringPermutation(s, pointer+1);
	}
	return;
}

int main(){
	stringPermutation("ABC", 0);
	return 0;
}
