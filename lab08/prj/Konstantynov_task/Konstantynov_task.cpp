#include <iostream>
#include "..\ModulesKonstantynov\ModulesKonstantynov.h"
#include "A:\libs\License.h"
using namespace std;
bool logExp(char a, char b) {
	if ((int)a + 1 <= (int)b) {
		return true;
	}
	else return false;
}
int main() {
	showLicenseWindow();
	int x, y, z;
	char a, b;
	cout << "Input x, y, z (numbers):";
	cin >> x >> y >> z;
	if (cin.fail()) {
		cout << "Invalid input for numbers." << endl;
		return 1;
	}
	cout << "Input a, b (symbols):";
	cin >> a >> b;
	if (!isalpha(a) || !isalpha(b)) {
		cout << "Invalid input for symbols." << endl;
		return 1;
	}
	cout << noboolalpha << logExp(a, b) << endl;
	cout << "x = " << x << "(dec) = " << hex << x << " (hex)\t" << "y = " << dec << y << "(dec) = " << hex << y << " (hex)\t" << "z = " << dec << z << "(dec) = " << hex << z << " (hex)\n" << "S = " << dec << s_calculation(x, y, z) << endl;
	cin >> a;
	return 0;
}

