#include <iostream>
using namespace std;

int main() {
	float x;
	cin >> x;
	if (abs(x) >= 1) {
		cout << "Mistake";
	}
	else {
		float sum, sum_1, sum0 = 0;
		float a_k, a_k1=x;
		sum_1 = sum0+a_k1;
		int i = 2;
		do {
			a_k = ((2 * i - 1) * x * x*a_k1) / (2 * i)*(2 * i)*(2 * 1 + 1);
			sum = sum_1 + a_k;
			sum_1 = sum;
			a_k1 = a_k;
			i++;
			//cout << sum << "\n" << a_k << "\n";
		} while (abs(a_k)>FLT_EPSILON);
		cout << "y = arcsin x = " << sum;

	}
}