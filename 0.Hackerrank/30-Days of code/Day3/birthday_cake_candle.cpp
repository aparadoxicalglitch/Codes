#include<iostream>
using namespace std;

int birthdayCakeCandles(int ar[],int n);

int main()
{
    int n;
    int ar[100];
    cout<<"Enter the number of elments : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
   
    cout<<"The number of max elements is : " <<birthdayCakeCandles(ar,n);

    return 0;
}

int birthdayCakeCandles(int ar[],int n)
{
    int c=0,max=0;
    for(int i=0; i<n; i++)
    {
         if(max<ar[i])
         {
             max = ar[i];
         }
    }
    for(int i=0; i<n; i++)
    {
        if(max==ar[i])
        {
            c++;
        }
    }
    return c;
}