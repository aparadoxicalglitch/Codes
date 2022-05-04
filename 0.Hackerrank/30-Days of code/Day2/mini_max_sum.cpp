#include <iostream>
#include <bits/stdc++.h> // to include sort function
typedef long long ll;    // to create our own datatype like long long
using namespace std;

// using the command typedef it is possible to give a shorter name to a dataype .

int main()
{
    ll ar[5];
    ll s = 0; // and use it here
    // or we can directly use it as long long ar[5];long long s=0;
    cout << "Enter the elements " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
        s = s + ar[i];
    }
    sort(ar, ar + 5);
    cout << s - ar[5 - 1] << " " << s - ar[0] << endl;

    return 0;
}
