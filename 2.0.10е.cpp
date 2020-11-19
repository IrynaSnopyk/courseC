
#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int a;
    int list_numbers[size] = { 0 };
    for (int i = 0; i < size; i++) {
        cout << "Input a[" << i + 1 << "] ";
        cin >> a;
        list_numbers[i] = abs(a);
    }
    int max = list_numbers[0];
    for (int i = 0; i < size; i++) {
        if (max < list_numbers[i]) max = list_numbers[i];
    }
    cout << "Max: " << max;
    
}
