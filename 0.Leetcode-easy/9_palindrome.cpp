#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        long int num = x , rev =0 , rem =0;
        while(x>0)
        {
            rem = x%10;
            rev = rev*10+rem;
            x = x/10;
        }
        
        if(num==rev)
            return true;
        else
            return false;
        
    }
};

int main()
{
    Solution s;
    int num ;
    cout<<"Enter a number : ";
    cin>>num;
    if(s.isPalindrome(num))
    {
        cout<<num<<" is a palindrome number"<<endl;
    }
    else
    {
        cout<<num<<" is not a palindrome number"<<endl;
    }
    
    return 0;
}