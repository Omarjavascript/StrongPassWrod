#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;




string ReadPositiveNumber(string massege ) {
	string PassWord = "";
	do{
		cout << massege << endl;
		cin >> PassWord;
	} while (PassWord == "#");
	return PassWord; 
}


string checkThePassowrd(string Password) {
	if (Password == "1234") {
		return "Passed"; 

	}
	else
	{
		return "Wrong PassWORD"; 
	}
}


int main() { 
	string EnterPassword = ReadPositiveNumber("Please Enter Your Password: "); 
	cout << checkThePassowrd(EnterPassword) << endl; 
	return 0;
}