#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i=0; i<=30; i++)
        {   
            if(ans ==n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            {
                ans = ans * 2;
            }
                
            
        }
        return false;
    }
};

int main()
{
    int n;
    cin>>n;
    
    Solution s;
    if(s.isPowerOfTwo(n))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}