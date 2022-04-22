#include<iostream>
using namespace std;

int main()
{
    int n,m=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        m = n*i;
        cout<<n<<" x "<<i<<" = "<<m<<endl;
    }
    return 0;
}