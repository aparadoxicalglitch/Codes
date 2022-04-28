#include<iostream>
using namespace std;
int sum(int n);
int main()
{
    int n;
    cout<<"Enter the value of n : "; 
    cin>>n;
    cout<<"The sum = "<<sum(n)<<endl;
    
    return 0;
}

int sum(int n)
{
    if(n!=0)
    {
        return n+sum(n-1);
    }
    else 
    {
        return n;
    }
}