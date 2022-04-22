#include<iostream>
using namespace std;
#include<cmath>

int main()
{
    int r=0,base,exponent;
    cout<<"Enter the base and exponent respectively"<<endl;
    cin>>base;
    cin>>exponent;
    r = pow(base, exponent);
    cout<<r<<endl;   
    return 0;
}