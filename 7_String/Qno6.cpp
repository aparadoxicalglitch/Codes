#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    string r;
    int a;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            a = int(s[i])+1; // convert character into integer (ascii value)
            r=r+char(a); // again convert integer into character 
        }
    }
    cout<<r;
    return 0;
}