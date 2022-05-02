#include<iostream>
using namespace std;

string capital(string s); 

int main()
{
    string s;
    cout<<"Enter a line : ";
    getline(cin, s);

    cout<<capital(s);
    return 0;
}

string capital(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(i==0)
        {
            s[i] = toupper(s[i]);
        }
        else if(s[i-1]==' ')
        {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}