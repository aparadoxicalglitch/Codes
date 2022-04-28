#include<iostream>
using namespace std;

int checkPrime(int num)
{
    int n = num,j=1;
    for(int i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            j=0;
        }
    }
    return j;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i = 2; i <= num/2; i++)
    {
        if(checkPrime(i))
        {
            if(checkPrime(num-i))
            {
                cout<<num<<" = "<<i<<" + "<<num-i<<endl;
            }
        }
    }
    return 0;
}