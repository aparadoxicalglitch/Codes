#include<iostream>
using namespace std;

int power(int base,int exponent);

int main()
{
    int base,exponent;
    cout<<"Enter the base and exponent respectively"<<endl;
    cin>>base;
    cin>>exponent;
    cout<<base<<"^"<<exponent<<" is "<<power(base, exponent)<<endl;
    return 0;
}

int power(int base,int exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    else
    {
        return base*power(base,exponent-1);
    }
}