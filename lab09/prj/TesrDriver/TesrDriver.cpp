#include <iostream>
#include "..\..\..\lab08\prj\ModulesKonstantynov\ModulesKonstantynov.h"
using namespace std;

int main() {
	float input[]{ -1,0,0.05,0.3,1.1,2,2.8,5,7,10,20 };
	float expectedOutput[]{ 0,0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 11; i++) {
		if (getGrade(input[i]) == 10) {
			cout << "Error: invalid input\tExpect: Error\tpassed\n";
		}
		else {
			cout << "Input height: " << input[i] << "\tGrade: " << getGrade(input[i]) << "\t" << "Expected grade:" << expectedOutput[i] << "\t";
			if (getGrade(input[i]) == expectedOutput[i]) {
				cout << "passed\n";
			}
			else {
				cout << "failed\n";
			}
		}
	}
	int input2[]{ -60,100,0,210,-13 };
	int expectedOutput2[]{ -51,37,-17,98,-25 };
	for (int i = 0; i < 5; i++)
	{
		cout << "Temperature (far): " << input2[i] << "\tTemperature (cel): " << temperature(input2[i]) << "\tExpected temperature: " << expectedOutput2[i];
		if (temperature(input2[i]) == expectedOutput2[i]) {
			cout << "\tpassed\n";
		}
		else {
			cout << "\tfailed\n";
		}
	}
	int input3[]{ -5,0,1,2,3,5,7 };
	int expectedOutput3[]{ 2,14,14,13 };
	for (int i = 0; i < 7; i++) {
		if (primalNum(input3[i]) == -1) {
			cout << "Error: invalid input\tExpect: Error\tpassed\n";
		}
		else {
			cout << "Input number: " << input3[i] << "\tResult: " << primalNum(input3[i]) << "\tExpected result : " << expectedOutput3[i-3];
			if (primalNum(input3[i]) == expectedOutput3[i-3]) {
				cout << "\tpassed\n";
			}
			else {
				cout << "\tfailed\n";
			}
		}
	}



	system("pause");
	return 0;
}