#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,rem,a=0;
    cout<<"Enter a number to check if it is an Armstrong number or not : "; 
    cin>>n; 
    int temp = n;
    int arm = n ;
    int p = 0;
    while(arm>0)
    {
        arm = arm / 10;
        p++;
    }
    while(n>0)
    {
        rem = n % 10; 
        a = a + pow(rem,p);
        n = n / 10;
    }
    if(temp==a)
    cout<<temp<<" is an Armstrong number"<<endl;
    else
    cout<<temp<<" is not an Armstrong number"<<endl;
    return 0;
}