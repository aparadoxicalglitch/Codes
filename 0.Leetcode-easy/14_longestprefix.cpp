#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.empty())
        {
            return "";
        }
        for(int i=0; i<s[0].size(); i++)
        {
            for(int j=1;j<s.size();j++)
            {
                if(i==s[j].size() || s[0][i] !=s[j][i])
                    return s[0].substr(0,i);
            }
        }
        return s[0];
    }
};

int main()
{
    Solution s;
    
    vector<string> vec;
    string st;
    int size; 
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the strings : ";
        cin>>st;
        vec.push_back(st);
    }
    cout<<s.longestCommonPrefix(vec);
    
    return 0;
}