#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the number of matches : ";
    cin>>n;
    int a[10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int min = 1000000, max =-1;int rb=0,rn=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            rn++;
        }
        if(a[i]>=max)
        {
            max = a[i];
            rb++;
        }
    }
    cout<<"The number times record broken : "<<rb-1;
    cout<<"The number times record not broken : "<<rn-1;
    return 0;
}