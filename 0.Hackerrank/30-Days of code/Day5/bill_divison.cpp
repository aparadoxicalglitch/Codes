#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int k;
    cout<<"Enter the position of the element : ";
    cin>>k;
    int a[n]; int sum =0;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    
    int b;
    cout<<"Enter the actual cost : ";
    cin>>b;
    int d = 0;
    for(int i=0; i<n; i++)
    {
        if(a[k]==a[i])
        {
            d = sum - a[i];
        }
    }
    int ba = d/2;
    int bc = b;

    if(b==ba)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<(bc-ba);
    }
    return 0;
}