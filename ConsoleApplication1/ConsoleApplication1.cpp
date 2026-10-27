#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;




string ReadPositiveNumber() {
	string PinCode ;
	do{
		cout << "Plese Enter Your Pin Code: " << endl;
		cin >> PinCode;
	} while (PinCode!="1234");
	return PinCode; 
}


bool checkThePassowrd() {
	string PinCode;
	if (PinCode == "12345") {
		return 1; 

	}
	else
	{
		return 2; 
	}
}


int main() { 
	ReadPositiveNumber();
	if (checkThePassowrd) {
		system("color 0A"); 
		cout << "Your Balance is " << 7800 << endl; 
	}

	return 0;
}