#include<iostream>
using namespace std;

void printStaircase(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n-i; j >1; j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    printStaircase(n);
    
    return 0;
}