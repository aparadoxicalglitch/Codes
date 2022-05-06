#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,p=0,i,j;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n],b[101];
    cout<<"Enter the elements : "<<endl;
    for(i = 0;i<n; i++)
    {
        cin>>a[i];
    }
    // j to represent colour
    for(j=0;j<101;j++)
    {
        for(i=0;i<n;i++)
        {
            if(j==a[i])
            {
            p++;
            }
            b[j] = p;  
        }
        p=0;  
        
    }
    for(i=0;i<101;i++)
    {
        j=b[i]/2;
        sum=sum+j;
    }
    cout<<"Number of paris are : "<<sum;
    return 0;
}
