#include <iostream>
using namespace std;

int main()
{
    int n1, n2, j;
    cout << "Enter the range you want to print the prime numbers between" << endl;
    cin >> n1;
    cin >> n2;
    while (n1 <= n2)
    {
        j = 0;
        for (int i = 1; i <= n1; i++)
        {
            if (n1 % i == 0)
            {
                j++;
            }
        }
        if (j == 2 && n1 != 1)
        {
            cout << n1 << " ";
        }
        n1++;
    }
    return 0;
}