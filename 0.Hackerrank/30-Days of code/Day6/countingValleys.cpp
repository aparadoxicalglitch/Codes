#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    char s[n];
    int b[n];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int u=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            u++;
            b[i]=u;
        }
        else {
            u--;
            b[i]=u;
        }
    }
    u=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]<0 && b[i+1]==0)
        {
            u++;
        }
    }
    cout<<"The number of valleys travesed are : "<<u;
    return 0;
}