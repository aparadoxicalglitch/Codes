#include<iostream>
using namespace std;

void printPrime(int l1, int l2)
{
    for(int i = l1; i <=l2; i++)
    {
        int k=0;
        for(int j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2 && i!=1)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n1,n2;
    cout<<"Enter the range you want to print the prime number"<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"Here are the prime numbers between your provided range"<<endl;
    printPrime(n1,n2);
    return 0;
}