#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


enum enuPrfictNotPerfictNumber {
	Perfict = 1 , 
	NotPerfict = 2 ,
};

int ReadPossitiveNumbers(string massege) {
	int Number; 
	do {
		cout << massege; 
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enuPrfictNotPerfictNumber CheckNumber(int Number) {
	int Sum = 0;  
	for (int i = 1; i <= Number/2; i++) {
		if (Number % i == 0) {
			Sum += i;
		}
		}
	if (Sum == Number) {
		return enuPrfictNotPerfictNumber::Perfict;
	}
	else
	{
		return enuPrfictNotPerfictNumber::NotPerfict;
	}
	} 

void PrintThePefictNumbers(int Number) {

	for (int i = 1; i <= Number; i++) {
		if (CheckNumber(i) == enuPrfictNotPerfictNumber::Perfict) {
			cout << "PE" << i;
		}
		else
		{
			cout << "NOT" << i;
		}
	}


	
	}


int main() {
	PrintThePefictNumbers(ReadPossitiveNumbers("Please Enter The Possitive Number: ")); 
	return 0; 
}