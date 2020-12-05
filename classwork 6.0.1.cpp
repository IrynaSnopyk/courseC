#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	const int n=5;

	long long mas[n];
	double y;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int j = n - 1; j >= 0; j--) {
		y = sqrt(mas[j]);
		cout << fixed;
		cout.precision(4); cout << y << endl;
		
	}
	return 0;

}