#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int ar[10],sum=0;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter the number : ";  
        cin>>ar[i];
        sum=sum+ar[i];
    }
    int mean = sum/10;
    int sum1=0;
    for(int i=0; i<10; i++)
    {
        sum1 = sum1+pow((ar[i]-mean),2);
    }
    float ur = sum1/9; // ur denotes under root
    float sd = sqrt(ur);

    cout<<"The standard deviation is : "<<sd;

    return 0;
}