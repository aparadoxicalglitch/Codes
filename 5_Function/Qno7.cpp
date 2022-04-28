#include<iostream>
using namespace std;

int hcf(int n1, int n2);

int main()
{
    int n1, n2,temp=0;
    cout<<"Enter two numbers to find out the HCF"<<endl;
    cin>>n1;
    cin>>n2;
    if(n2>n1)
    {
        temp=n2;
        n2=n1;
        n1=temp;
    }
    cout<<"HCF = "<<hcf(n1,n2);

    return 0;
}

int hcf(int n1, int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else 
    {
        return n1;
    }
}