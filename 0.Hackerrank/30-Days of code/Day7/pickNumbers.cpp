#include<iostream>
using namespace std;

int main()
{
    int n,c=0,max=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n; j++)
        {
            if(a[i]==a[j]||(a[i]+1)==a[j])
            {
                c++;
            }
        }
        b[i]=c;
        c=0;
    }
    max=b[0];
    for(int i=0;i<n;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    cout<<max<<endl;
    return 0;
}