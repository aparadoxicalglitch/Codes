#include<iostream>
using namespace std;

int main()
{
    int a[3],b[3];
    int n,n1;
    int x=0,y=0;
    for(int i = 0;i<3;i++)
    {
        cout<<"Enter number of Alice : ";
        cin>>n;
        a[i] = n;
    }
    for(int i = 0;i<3;i++)
    {
        cout<<"Enter the number of Bob : ";
        cin>>n1;
        b[i] = n1;
    }
    for(int i =0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            x++;
        }
        else if(b[i]>a[i])
        {
            y++;
        }
    }
    cout<<x<<" ";
    cout<<y<<endl;
}