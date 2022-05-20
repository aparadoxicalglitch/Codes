#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end  = row*col-1;
        
        int mid = start + (end-start)/2;
        
        while(start<=end) {
            
            int element = matrix[mid/col][mid%col];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target) {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
             mid = start + (end-start)/2;    
        }
        return 0;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> a;
    int r, c, target;
    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "Enter the number of columns : ";
    cin >> c;
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        vector<int> vec;
        for (int j = 0; j < c; j++)
        {
            int e = 0;
            cin >> e;
            vec.push_back(e);
        }
        a.push_back(vec);
    }
    cout<<"Enter the target : ";
    cin>>target;
    
    if(s.searchMatrix(a, target))
    {
        cout<<target<<" is present";
    }
    else
    {
        cout<<target<<" is not present";
    }


    return 0;
}