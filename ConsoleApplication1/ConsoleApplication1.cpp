#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



void HeaderTitile() {
	cout << "\t\t\t\tMultiplcation Table From 1 to 10\n" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << "          " << i;
	}
	cout << "\n";
	cout << "----------------------------------------------------------------------------------------------------------------";
	cout << endl; 
}
string CoulmsSprator(int i) {
	if (i < 10) {
		return " |";
	}
	else
	{
		return "|"; 
	}
}

void PrintMultiplcationTable() {
	for (int i = 1; i <= 10; i++) {
		cout << " " << i << CoulmsSprator(i)<< "\t"; //made couluns ; 
		for (int j = 1; j <= 10; j++) {
			cout <<  j * i << "\t";
		}
		cout << endl;
	}
}
int main() {
	HeaderTitile(); 
	PrintMultiplcationTable(); 
	return 0; 
}