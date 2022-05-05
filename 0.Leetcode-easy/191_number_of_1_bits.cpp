#include<iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n!=0)
        {
            //checking last bit if it is zero or 1
            if(n&1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    Solution s;

    cout<<"The count is : "<<s.hammingWeight(00000000000000000000000000001011);
    cout<<s.hammingWeight(000000000000000000000000)<<endl;
    // cout<<s.hammingWeight(1111111111111111111111101); // we will have to assign it to long long to run this 
    
    return 0;
}