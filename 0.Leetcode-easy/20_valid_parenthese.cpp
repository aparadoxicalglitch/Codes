#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length()%2 != 0)
            return false;
        
        stack <char> b;
        for (int i=0; i<s.length(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                b.push(s[i]);
            }
            else 
            {
                if(b.empty() || (b.top()=='(' && s[i]!=')') || (b.top()=='[' && s[i]!=']') || (b.top()=='{' && s[i]!='}'))
                {
                return false;
                }
            b.pop();
            }
        }
        return b.empty();
    }
};

int main()
{
    Solution sl;
    string s = "(){";
    if(sl.isValid(s))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}