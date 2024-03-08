#include <iostream>
#include"..\ModulesKonstantynov\ModulesKonstantynov.h"
using namespace std;

int main()
{
    const int SIZE = 10;
    float input[SIZE];
    float expectedResult[SIZE] = { -0.22035, 0.106812, 0.398244, 0.608726, 0.0413355, 2.07583, 4.21965, 6.10062, 7.9565, 9.77476 };
    for (int i = 0; i < SIZE; i ++) {
        input[i] = (float)i / 2;
        float result = s_calculation(input[i], input[i] + 0.5, input[i] + 1);
        cout << "Entered numbers: " << " " << input[i] << " " << input[i] + 0.5 << " " << input[i] - 3 << "\tresult: " << result <<"\t";
        cout << "Expextet result: " << expectedResult[i]<<"\t";
        if (result == expectedResult[i]) {
            cout << "passed" << endl;
        }
        else cout << "failed" << endl;

    }

    return 0;
}


