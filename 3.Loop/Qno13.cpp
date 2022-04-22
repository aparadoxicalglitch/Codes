#include<iostream>
using namespace std;

int main()
{
    int n,j=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            j++;
        }
    }
    if(j==2)
    cout<<"Prime number"<<endl;
    else
    cout<<"Not a prime number"<<endl;
    return 0;
}