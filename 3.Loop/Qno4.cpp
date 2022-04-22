#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,c=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a;
        cout<<" ";
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}