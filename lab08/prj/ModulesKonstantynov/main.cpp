#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <bitset>
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <list>


using namespace std;

float s_calculation(float x, float y, float z) {
	float s = log(fabs(sin(z))) + (0.5 * x * x - pow(fabs((pow((y + z), 2)) - pow(x, 5)), 0.5) / (10 * M_PI * pow(z, 4)));
	return s;
}

int getGrade(float waveHeight) {
	if (waveHeight == 0) {
		return 0;
	}
	else if (waveHeight > 0 && waveHeight <= 0.1) {
		return 1;
	}
	else if (waveHeight > 0.1 && waveHeight <= 0.5) {
		return 2;
	}
	else if (waveHeight > 0.5 && waveHeight <= 1.25) {
		return 3;
	}
	else if (waveHeight > 1.25 && waveHeight <= 2.5) {
		return 4;
	}
	else if (waveHeight > 2.5 && waveHeight <= 4) {
		return 5;
	}
	else if (waveHeight > 4 && waveHeight <= 6) {
		return 6;
	}
	else if (waveHeight > 6 && waveHeight <= 9) {
		return 7;
	}
	else if (waveHeight > 9 && waveHeight <= 14) {
		return 8;
	}
	else if (waveHeight > 14) {
		return 9;
	}
	else return 10;
}

int temperature(int tFar) {
	int tCel = (tFar - 32) * 5 / 9;
	return tCel;
}

int primalNum(int number) {
	if (number <= 1 || number > 65535) {
		return -1;
	}
	for (int i = 2; i < number; ++i) {
		if (number % i == 0) {
			return -1;
		}
		else {
			return (number & 1) ? 16 - std::bitset<16>(number).count() : std::bitset<16>(number).count();
		}
	}
	
}

void task1(string file) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c;
	fstream fs;
	fs.open(file, fstream::in | fstream::out);
	if (!fs.is_open()) {
		cout << "Помилка відкриття файлу";
	}
	else {
		list<string> text;
		string paragraph, language;
		while (getline(fs, paragraph)) {
			text.push_back(paragraph);
		}
		text.reverse();		
		fs.seekg(0);
		while (fs.get(c)) {
			if ((c >= (char)0xC0 && c <= (char)0xDF) || (c >= (char)0xE0 && c <= (char)0xFF)) {
				language = "Текст у файлі українською мовою\n";
				break;
			}
			else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
				language = "Текст у файлі англійською мовою\n";
				break;
			}
		}
		fs << "Модуль розробив Олексій Константинов. ЦНТУ, Кропивницький, Україна, 2024\n";
		for (const auto& str : text) {
			fs << str << endl;
		}
		fs << language;
		fs.close();
	}
}

void task2(string file) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	fstream fs;
	int counter = 0;
	char c;
	fs.open(file, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open()) {
		cout << "Помилка відкриття файлу";
	}
	else {
		while (fs.get(c)) {
			if (c == '.' || c == ',') {
				counter++;
			}
		}
		time_t current_time = time(nullptr);
		tm* local_time = localtime(&current_time);
		fs << "Кількість \",\" і \".\" у тексті:" << counter << endl << "Дата та час дозапису: " << asctime(local_time) << endl;
		fs.close();
	}
}

void task3(string file, int x, int y, int z, int b) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string bin;
	fstream fs;
	fs.open(file, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open()) {
		cout << "Помилка відкриття файлу";
	}
	else {
		fs << s_calculation(x, y, z);
		while (b > 0) {
			bin = to_string(b % 2) + bin;
			b /= 2;
		}
		fs << bin;
		fs.close();
	}
}
