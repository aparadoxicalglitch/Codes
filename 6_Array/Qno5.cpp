#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter the no. for " << i << " , " << j << endl;
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter the no. for " << i << " , " << j << endl;
            cin >> b[i][j];
        }
    }
    cout << "First Matrix is:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";
        for (int j = 0; j < 2; j++)
            cout << a[i][j] << "\t";
    }
    cout<<endl;
    cout << "\nSecond Matrix is:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";
        for (int j = 0; j < 2; j++)
            cout << b[i][j] << "\t";
    }
    cout<<endl;
    cout << "\nSum of two Matrix is :"<<endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "\n";
        for (int j = 0; j < 2; j++)
            cout << a[i][j] + b[i][j] << "\t";
    }
    return 0;
}