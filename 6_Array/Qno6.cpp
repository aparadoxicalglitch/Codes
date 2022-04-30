#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k, sum = 0;
    cout << "Enter rows and columns for first matrix: " << endl;
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: " << endl;
    cin >> r2 >> c2;
    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1 != r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
        cout << "Enter rows and columns for first matrix: " << endl;
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: " << endl;
        cin >> r2 >> c2;
    }
    // Storing elements of first matrix.
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a : " << i + 1 << " , " << j + 1 << " : ";
            cin >> a[i][j];
        }
    // Storing elements of second matrix.
    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b : " << i + 1 << " , " << j + 1 << " : ";
            cin >> b[i][j];
        }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            // Calculate the result
            for (int k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    cout << endl
         << "Output Matrix : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << " " << result[i][j];
            if (j == c2 - 1)
            {
                cout << endl;
            }
        }
    }
    return 0;
}