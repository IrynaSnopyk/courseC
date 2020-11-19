#include <iostream>
using namespace std;

int main()
{
    const int n = 1;
    int matrix[2 * n][2 * n] = { {1,2},{3,4} };
    int new_matrix[2 * n][2 * n] = {0,0};
    for (int i = 0; i < 2*n; i++) {
        for (int j = 0; j < 2*n; j++) {
            new_matrix[j][2 * n - 1 - i] = matrix[i][j];
        }
    }
    for (int i = 0; i < 2*n; i++)
    {
        for (int j = 0; j < 2*n; j++)
            cout << new_matrix[i][j] << "  ";

        cout << endl;
    }
}

