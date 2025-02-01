#include <iostream>
using namespace std;
int main() 
{
    int matrix[2][2];
    cout << "Enter values for a 2x2 matrix:" << endl;
    for (int i = 1; i <= 2; i++) 
    {
        for (int j = 1; j <=2; j++) 
        {
            cout << "Enter value for element (" << i << "," << j  << "): ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nThe 2x2 matrix is:" << endl;
    for (int i = 1; i <= 2; i++) 
    {
        for (int j = 1; j <= 2; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}; 