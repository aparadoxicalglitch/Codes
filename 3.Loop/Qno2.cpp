#include<iostream>
using namespace std;

int main()
{
    int n,f=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=n; i>1; i--)
    {
        f = f*i;
    }
    cout<<"The factorial of "<<n<<" is "<<f<<endl;
    return 0;
}