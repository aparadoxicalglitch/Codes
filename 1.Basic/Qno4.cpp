#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the divisor : ";
    cin>>a;
    cout<<"Enter the dividend : ";
    cin>>b;
    int q = b/a;
    int r = b%a;
    cout<<"The quotient is : "<<q<<" and the remainder is : "<<r<<endl;
    return 0;
}