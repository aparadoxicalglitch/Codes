#include<iostream>
using namespace std;

long sumofarray(long a[],int n)
{
    long sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];  
    }
    return sum;
}

int main()
{
    unsigned long long int sum=0,in;int n;
    long a[1000];
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<< endl;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        a[i]=in;   
    }
    sum = sumofarray(a,n);
    cout<<"The sum is : "<<sum;
}