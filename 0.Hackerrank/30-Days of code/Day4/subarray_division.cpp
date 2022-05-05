#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Enter the size of the array : ";
    cin>>s;
    int d,m;
    int ans = 0,c=0;
    cout<<"Enter the value of d and m respectively : "<<endl;
    cin>>d;
    cin>>m;
    int a[200];  
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        ans =0;
        for(int j =0;j<m;j++)
        ans = ans + a[i+j];
        if(ans==d)
        {
            c++;
        }
    }
    cout<<"Answers : "<<c<<endl;
    return 0;
}
