#include <iostream>
#include <string>
using namespace std;
int binary[8];

int convertDecimalToBinary(int decimal){
	
	int i = 7;
	while(decimal > 0){
		binary[i--] = decimal%2;
		decimal /= 2;
	}
}

string checkNetworkClass(int ip){

	convertDecimalToBinary(ip);
	if(binary[0] == 0){
		return "Class A";
	}
	else if(binary[1] == 0){
		return "Class B";
	}
	else if(binary[2] == 0){
		return "Class C";
	}
	else if(binary[3] == 0){
		return "Class D";
	}
	else if(binary[3] == 1){
		return "Class E";
	}
	else{
		return "Invalid IP";
	}
}

void printIp(int o1, int o2, int o3, int o4){
	cout << o1 << "."<< o2 << "."<< o3 << "."<< o4 << " belongs to : ";
}

int main(){
	string ip;
	int octet1, octet2, octet3, octet4;
	cout << "Enter and IP address in Decimal Format : \n";
	cout << "Enter the 1st octet : ";
	cin >> octet1;
	cout << "Enter the 2nd octet : ";
	cin >> octet2;
	cout << "Enter the 3rd octet : ";
	cin >> octet3;
	cout << "Enter the 4th octet : ";
	cin >> octet4;
	printIp(octet1,octet2,octet3,octet4);
	cout << checkNetworkClass(octet1) << " Network\n";
	return 0;
}
