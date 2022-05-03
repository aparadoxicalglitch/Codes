#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main()

{

    int a[10];

    int n;

    cout<<"Enter the number of subjects : ";

    cin >> n;

    cout<<"Enter the marks "<< endl;

    for (int i = 0; i < n; i++)

        cin >> a[i];

    cout<<"Your marks after rounding "<< endl;

    for (int i = 0; i < n; i++)

    {

        if (a[i] >= 38 && a[i] <= 100)

        {

            if (a[i] % 5 == 1)

                cout << a[i] << endl;

            else if (a[i] % 5 == 2)

                cout << a[i] << endl;

            else if (a[i] % 5 == 3)

                cout << a[i] + 2 << endl;

            else if (a[i] % 5 == 4)

                cout << a[i] + 1 << endl;

            else if (a[i] % 5 == 0)

                cout << a[i] << endl;
        }
        else if (a[i] >= 0 && a[i] <= 38)
        {
            cout << a[i] << endl;
        }
    }
}