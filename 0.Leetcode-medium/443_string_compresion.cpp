#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        
        while(i<n)
        {
            int j =i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            // two situations to be here
            // if vector has been traversed completely
            // or they have encountered a different character
            
            //storing oldChar
            chars[ansIndex++]=chars[i];
            int count = j-i;
            if(count > 1)
            {
                //converting counting into single digit 
                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++]=ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};

int main()
{
    Solution sl;
    vector<char> chars;
    char ch;
    int n;
    cout<<"enter the size : ";
    cin>>n;

    cout<<"enter the elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>ch;
        chars.push_back(ch);
    }

    int ans = sl.compress(chars);

    cout<<"Answer : "<<ans<<endl;
    
    return 0;
}