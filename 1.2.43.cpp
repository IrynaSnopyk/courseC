
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;
    int number1 = number;
    int result = 0;

    while (number1 != 0) {
        number1 /= 10;
        result++;
    }

    int a, y_n, y_n1;//y(n); y(n-1)
    y_n1 = 0;
    for (int i = 1; i <= result; i++) {
        int powe = pow(10,i);
        a = number % powe / pow(10, i - 1);
        y_n = y_n1 * 10 + a;
        y_n1 = y_n;
    }
    cout << "Result: " << y_n;
}

