#include<iostream>
using namespace std;

int DtoB(int dec)
{
    int r,b=0,i=1;
    while(dec!=0)
    {
        r = dec%2;
        dec=dec/2;
        b=b+r*i;
        i=i*10;
    }
    return b;
}

int main()
{
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int bin = DtoB(n);
    cout<<bin<<endl;
    return 0;
}