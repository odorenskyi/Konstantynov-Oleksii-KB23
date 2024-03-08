#define _USE_MATH_DEFINES
#include<cmath>

float s_calculation(float x, float y, float z) {
	float s = log(fabs(sin(z))) + (0.5 * x * x - pow(fabs((pow((y + z), 2)) - pow(x, 5)), 0.5) / (10 * M_PI * pow(z, 4)));
	return s;
}
