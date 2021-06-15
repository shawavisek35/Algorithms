#include <iostream>
using namespace std;

void generateBalancedParanthesis(int o, int c, string s){
	if(o==0 && c==0){
		cout << s << "\n";
		return;
	}
	if(o!=0){
		string s1 = s;
		s1.append("{");
		generateBalancedParanthesis(o-1, c, s1);
	}
	if(c>o){
		string s1 = s;
		s1.append("}");
		generateBalancedParanthesis(o,c-1,s1);
	}
	return;
}

int main(){
	generateBalancedParanthesis(3,3,"");
	return 0;
}
