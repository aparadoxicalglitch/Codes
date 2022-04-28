#include<iostream>
#include<cmath>
using namespace std;

int BtoD(int bnum)
{
    int r=0,d=0;
    int count=0;
    int n = bnum;
    while (n > 0)
    {
        n = n/10;
        ++count;
    }
    for(int i = 0; i <count; i++)
    {
        r = bnum%10;
        d = d + (r * pow(2,i) );
        bnum=bnum/ 10;
    }
    return d;
}

int main()
{
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int decimal = BtoD(num);
    cout<<decimal<<endl;
    return 0;
}