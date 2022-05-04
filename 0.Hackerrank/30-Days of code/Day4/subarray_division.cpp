#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Enter the size of the array : ";
    cin>>s;
    int d,m;
    cout<<"Enter the value of d and m respectively : "<<endl;
    cin>>d;
    cin>>m;
    int a[10], a2[10];
    for(int i=0; i<s; i++)
    {
        cin>>a[i];
        a2[i]=a2[i]+a[i];
    }
    int ans = 0;
    for(int i=m; i<=s;i++)
    {
        if(a2[i]-a2[i-m]==d)
        {
            ans;
        }
    }
    cout<<ans<<endl;
    return 0;
}