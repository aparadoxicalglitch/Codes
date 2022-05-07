#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int q;
    int x,y,z;
    for(int i=0; i<q;i++)
    {
        cin>>x;
        cin>>y;
        cin>>z;
        int a = abs(x-y);
        int b = abs(y-z);
        if(a<b)
        {
            cout<<"Cat A";
        }
        else if(b<a)
        {
            cout<<"Cat B";
        }
        else
        {
            cout<<"Mouse C";
        }
    }
    return 0;
}