
#include <iostream>
using namespace std;

float deviation(int n, int A[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
    }
    float a_avarage = sum / n;
    float deviat = 0;
    for (int i = 0; i < n; i++) {
        deviat += pow((A[i] - a_avarage), 2);
    }
    deviat = sqrt(deviat / n);
    return deviat;
}


int main()
{
    const int n = 7;
    int A[n] = { 3, 5, 7,12,-4,7,6 };
    cout << deviation(n, A);
}
