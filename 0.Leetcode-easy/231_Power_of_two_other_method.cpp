#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int ans = 1;
        int c = 0;
        while (n != 0)
        {
            // if the set bit of a number is 1 then it's a power of two
            if (n & 1)
            {
                c++;
            }
            n = n >> 1;
        }
        if(c==1)
        {
            return true;
        }
        else
        {
            return false;
        }
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