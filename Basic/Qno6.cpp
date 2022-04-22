#include<iostream>
using namespace std;

int main()
{
    int a,b,swap;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    swap = a;
    a = b;
    b = swap;
    cout<<"\nAfter swapping."<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0;
}