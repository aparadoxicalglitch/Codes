#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;
        
        while(st<e)
        {
            swap(s[st++],s[e--]);
        }
        
    }
};

int main()
{
    vector<char> s;
    int n;
    cout<<"Enter the size : "; 
    cin>>n;
    char ch;
    cout<<"Enter the character : ";
    // cin>>ch;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        s.push_back(ch);
        // if(i==int('\0'))
        // {
        //     break;
        // }
    }
    s.push_back(ch);
    Solution sl;
    sl.reverseString(s);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }

    return 0;
}