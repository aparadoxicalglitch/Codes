#include<iostream>
using namespace std;

//    *   
//   * *
//  *   *
// *******

int main()
{
    int rows;
    cout<<"Enter the number of rows : ";
    cin >> rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=(2*rows-1);j++)
        {
            if(i+j==(rows+1) || j-i == (rows-1) || i==rows)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}