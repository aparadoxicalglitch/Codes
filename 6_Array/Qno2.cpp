#include<iostream>
using namespace std;

int main()
{
    int n,ar[100];
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number : ";  
        cin>>ar[i];
    }

    for (int i=0;i<n;i++)
    {
        if(ar[0]<ar[i])
        {
            ar[0]=ar[i];
        }
    }
    cout<<"Largest number : "<<ar[0]<<endl;

    return 0;
}