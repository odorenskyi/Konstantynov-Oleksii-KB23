#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

class Pipe {
	
public:
	Pipe() {
		cout << "Введіть довжину труби: ";
		cin >> length;
		cout << "Введіть радіус труби: ";
		cin >> radius;
	}
	void getValues() {
		cout << "Довжина труби: " << length << endl << "Радіус труби: " << radius << endl;
	}
	void getArea() {
		this->S = this->radius * this->length * M_PI * 2;
		cout << "Площа бокової поверхні труби: " << setprecision(3) << S << endl;
	}
	void setNewValues() {
		double length, radius;
		cout << "Введіть довжину труби: ";
		cin >> length;
		cout << "Введіть радіус труби: ";
		cin >> radius;
		if (length>0&&radius>0)
		{
			this->length = length;
			this->radius = radius;
		}
		else {
			cout << "Некоректні дані!" << endl;;
		}
	}

private:
	double length, radius, S;

};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Pipe* pipe = new Pipe();
	pipe->getValues();
	pipe->getArea();
	pipe->setNewValues();
	pipe->getValues();
	pipe->getArea();
	system("pause");
	return 0;
}