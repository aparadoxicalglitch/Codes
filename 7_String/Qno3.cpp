#include<iostream>
using namespace std;

string remove(string s);

int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin, s);
    
    cout<<"String after removing all characters except alphabet is : "<<remove(s)<<endl;

    return 0;
}

string remove(string s)
{
    string st;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            st=st+s[i];
        }
    }
    return st;
}