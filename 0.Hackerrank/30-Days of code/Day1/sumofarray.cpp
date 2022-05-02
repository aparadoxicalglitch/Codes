#include<iostream>
using namespace std;

int sumofarray(int a[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];  
    }
    return sum;
}

int main()
{
    int n,n1;
    int a[10];
    cout<<"Enter number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number : ";
        cin>>n1;
        a[i]=n1;   
    }
    int sum = sumofarray(a,n);
    cout<<sum;
}