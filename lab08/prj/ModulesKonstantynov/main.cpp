#define _USE_MATH_DEFINES
#include<cmath>
#include <bitset>

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