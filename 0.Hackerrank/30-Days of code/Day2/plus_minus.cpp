#include<iostream>
using namespace std;

void plusMinus(int a[],int n);

int main()
{
    int n,a[100];
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;
    cout<<"Enter the elements : "<< endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    plusMinus(a,n);

    return 0;
}

void plusMinus(int a[],int n)
{
    int na=0,ne =0,z=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            ne++;
        }
        if(a[i]>0)
        {
            na++;
        }
        if(a[i]==0)
        {
            z++;
        }
    }
    // float n1 =(float) ne/n;
    // float n2 =(float) na/n;
    // float n3 =(float)z/n;

    printf("%.6f\n",(float)na/n);
    printf("%.3f\n",(float)ne/n);
    printf("%.3f",(float)z/n);
}