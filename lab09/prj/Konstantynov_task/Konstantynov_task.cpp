#include <iostream>
#include "..\..\..\lab08\prj\ModulesKonstantynov\ModulesKonstantynov.h"
#include "A:\libs\License.h"
using namespace std;

int main() {
	char end;
	char start;
	int z, x, c;
	do {
		cout << "Press j to begin: ";
		cin >> start;
		if (start == 'j') {
			cout << "Input high of the wave: ";
			cin >> z;
			if (getGrade(z) == 10) {
				cout << "Error: invalid input" << endl;
				continue;
			}
			cout << "Input the temperature: ";
			cin >> x;
			cout << "Input the primal number:";
			cin >> c;
			if (primalNum(c) == -1) {
				cout << "Error: invalid input" << endl;
				continue;
			}
			cout << "Result: " << s_calculation(getGrade(z), temperature(x), primalNum(c)) << endl;
		}
		cout << "Press V or A to exit...";
		cin >> end;
	} while (end != 'v' && end != 'V' && end != 'A');
	showLicenseWindow();
	system("pause");
	return 0;
}