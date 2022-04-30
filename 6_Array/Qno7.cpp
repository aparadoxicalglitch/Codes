#include<iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the no. for " << i << " , " << j << endl;
            cin >> a[i][j];
        }
    }
    cout << "First Matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
    }
    cout<<endl;
    cout << "Transpose Matrix is:" << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << "\n";
        for (int i = 0; i < 3; i++)
            cout << a[i][j] << "\t";
    }
    cout<<endl;

    return 0;
}