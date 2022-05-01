#include<iostream>
using namespace std;

bool palindrome(string s);

int main()
{
    string s;
    cout<<"Enter a word : ";
    cin>>s;
    
    if(palindrome(s))
    {
        cout<<s<<" is a palindrome ";
    }
    else
    {
        cout<<s<<" is not a palindrome";
    }
    return 0;
}

bool palindrome(string s)
{
    string p;
    for(int i=0; i<s.length(); i++)
    {
        p=s[i]+p;
    }
    if(s==p)
    {
        return true;
    }
    else
    {
        return false;
    }
}