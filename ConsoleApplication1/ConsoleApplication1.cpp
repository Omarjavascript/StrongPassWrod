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

enuPrfictNotPerfictNumber CheackNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i <= (Number / 2); i++) {
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

void PrintTheResult(int Number) {
	if (CheackNumber(Number) == enuPrfictNotPerfictNumber::Perfict) {
		cout << "Pefect Number"; 
	}
	else {
		cout << "Not Perfect Number"; 
	}
}

int main() {
	PrintTheResult(ReadPossitiveNumbers("Please Enter A possitive Number: ")); 
	return 0;
}