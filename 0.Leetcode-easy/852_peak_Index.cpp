#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0; // start
        int e = arr.size()-1; // end
        
        int mid = s+(e-s)/2;
        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};

int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    int e;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>e;
        vec.push_back(e);
    }
    Solution s;
    int peakIndex = s.peakIndexInMountainArray(vec);

    cout<<"Peak index : "<<peakIndex<<endl;
    
    return 0;
}