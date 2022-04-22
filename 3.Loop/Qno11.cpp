#include<iostream>
using namespace std;

int main()
{
    int base,exponent,r=1;
    cout<<"Enter the base and exponent respectively"<<endl;
    cin>>base; 
    cin>>exponent;
    for (int i=1; i<=exponent; i++)
    {
        r = r * base;
    }
    cout<<base<<"^"<<exponent<<" is "<<r<<endl;
    return 0;
}