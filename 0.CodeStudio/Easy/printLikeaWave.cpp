#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int> > arr, int nRows, int mCols)
{
    vector<int> ans;
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                //cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    return ans;
}
int main()
{
    vector<vector<int>> a; 
    int r,c;
    cout<<"Enter the number of rows : "; 
    cin>>r;

    cout<<"Enter the number of columns : ";
    cin>>c;
    cout<<"Enter the elements of the matrix"<<endl;
    // to take input in vector matrix
    for(int i=0; i<r; i++)
    {
        vector<int> vec;
        for(int j=0; j<c; j++)
        {
            int e=0;
            cin>>e;
            vec.push_back(e);
        }
        a.push_back(vec);
    }

    vector<int> ans; 
    ans = wavePrint(a,r,c);

    cout<<"Printing the answer"<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}