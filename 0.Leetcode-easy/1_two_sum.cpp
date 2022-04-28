#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};

int main()
{
    Solution s;
    vector<int> vec;
    vec ={3,7,9,10,5};
    vector<int> result = s.twoSum(vec,8);
    // for(int i:result)
    // {
    //     cout<<i<<endl;
    // }
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}