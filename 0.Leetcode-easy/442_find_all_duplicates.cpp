#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
       sort(nums.begin(), nums.end());
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            ans.push_back(nums[i]);
        }
        
    }
        return ans;
    }
};

int main()
{
    vector<int> vec;  
    int s;
    cout<<"Enter size : ";
    cin>>s;
    int e;
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>e;
        vec.push_back(e);
    }

    Solution sl;

    vector<int> vec2 = sl.findDuplicates(vec);
    cout<<"Displaying the answer"<<endl;
    cout<<"[";
    for(int i=0; i<vec2.size(); i++)
    {
        cout<<vec2[i]<<",";
    }
    cout<<"]";
    return 0;
}