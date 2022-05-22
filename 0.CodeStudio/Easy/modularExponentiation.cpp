#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    int res = 1;

    while (n > 0)
    {

        if (n & 1)
        {
            // odd
            res = (1LL * (res) * (x) % m) % m;
        }
        n = n >> 1;
        x = (1LL * (x) % m * (x) % m) % m;
    }
    return res;
}

int main()
{
    int x,n,m; 
    cout<<"Enter the value of x : ";
    cin>>x;

    cout<<"Enter the value of n : ";
    cin>>n;

    cout<<"Enter the value of m : ";
    cin>>m;  

    int res = modularExponentiation(x,n,m);
    cout<<"Answer is : "<<res<<endl;

    return 0;
}