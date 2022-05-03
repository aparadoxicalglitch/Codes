#include<iostream>
#include<cmath>
using namespace std;

int diagonalDifference(int ar[3][3],int n);

int main()
{
    int n;
    cout<<"Enter the number of rows and columns you want in the matrix : "; 
    cin>>n;
    int ar[3][3];
    int e;
    cout<<"Enter the elemnets : ";
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        {
             
            cin>>ar[i][j];
        }
        
    }
    
    int dif = diagonalDifference(ar,n);
    cout<<"The diagonal difference is : "<<dif<<endl;

    return 0;
}

int diagonalDifference(int ar[3][3],int n)
{
    int sum = 0,sum1 =0,diff =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum = sum + ar[i][j];
            }
            if(i+j==(n-1))
            {
                sum1 = sum1 + ar[i][j];
            }
        }
    }
    diff = sum - sum1;
    if(diff>0)
    {
        return sum-sum1;
    }
    else
    {
        // return (-1)*diff;
        return abs(sum-sum1);
    }
}