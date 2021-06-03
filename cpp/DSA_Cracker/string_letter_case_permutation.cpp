#include <iostream>
using namespace std;

void stringPermutation(string s, int pointer){
	if(pointer == s.size()){
		cout << s << "\n";
		return;
	}
	if(isdigit(s[pointer])){
		stringPermutation(s, pointer+1);
	}
	else if(isupper(s[pointer])){
		stringPermutation(s, pointer+1);
		s[pointer] = s[pointer] + 32;
		stringPermutation(s, pointer+1);
	}
	else{
		stringPermutation(s, pointer+1);
		s[pointer] = s[pointer] - 32;
		stringPermutation(s, pointer+1);
	}
	return;
}

int main(){
	stringPermutation("Abc1D", 0);
	return 0;
}
