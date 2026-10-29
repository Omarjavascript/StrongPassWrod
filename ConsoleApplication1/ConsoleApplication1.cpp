#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


enum enuPrimeNotPrimeNumber {
	Prime = 1 , 
	NotPrime = 2 ,
};

int ReadPossitiveNumbers(string massege) {
	int Number; 
	do {
		cout << massege; 
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
enuPrimeNotPrimeNumber CheckNumber(int Number) {
	int M = round(Number / 2); 
	for (int counter = 2; counter <= M; counter++) {
		if (Number % counter == 0) {
			return enuPrimeNotPrimeNumber::NotPrime;
		}
		return enuPrimeNotPrimeNumber::Prime;
	}
}

void PrintPrimeNumbers(int Numbers) {
	cout << "\n";
	cout << "The Prime Numbers from 1 To " << Numbers << " Are" << endl; 
	for (int i = 1; i <= Numbers; i++) {
		if (CheckNumber(i) == enuPrimeNotPrimeNumber::Prime) {
			cout << i << endl;
		}
	}
}


int main() {
	PrintPrimeNumbers(ReadPossitiveNumbers("Please Enter Possitive Number: ")); 
	return 0;
}