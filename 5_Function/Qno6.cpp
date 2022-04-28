#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}

int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}