#include <iostream>
using namespace std;

void largest(string s);

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    largest(s);

    return 0;
}

void largest(string s)
{
    int c=0, max = 0;
    s= s+" ";
    string l, lar;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=' ')
        {
            l= l+ s[i];
            c++;
            
        }
        else 
        {
            if(max<c)
            {
                lar = l;
                max = c;
            }
            c = 0;
            l = "";
        }  
    }
    cout << "The largest word in the given string is : " <<lar;
}