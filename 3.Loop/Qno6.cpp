#include<iostream>
using namespace std;

int main()
{
    int n1,n2,temp=0,hcf;
    cout<<"Enter two numbers to find out the HCF"<<endl;
    cin>>n1;
    cin>>n2;
    // if n2 is greater than n1 
    if(n2>n1)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for(int i=1;i<n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    cout<<"HCF = "<<hcf<<endl;
    return 0;
}