#include <iostream>
using namespace std;

#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }

    // Putting the 0's in the array in starting.
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
        cout << arr[i] << " ";
    }

    // Putting the 1's in the array after the 0's.
    for (int i = count0; i < (count0 + count1); i++)
    {
        arr[i] = 1;
        cout << arr[i] << " ";
    }

    // Putting the 2's in the array after the 1's
    for (int i = (count0 + count1); i < n; i++)
    {
        arr[i] = 2;
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int a[10];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort012(a, n);

    return 0;
}