#include<iostream>
using namespace std;

int main()
{
    int n,rem,rev=0;
    cout<<"Enter a number : ";
    cin>>n;
    int temp = n;
    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(temp==rev)
    cout<<temp<<" is a palindrome number"<<endl;
    else
    cout<<temp<<" is not a palindrome number"<<endl;
    return 0;
}