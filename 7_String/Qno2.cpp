#include<iostream>
#include<string>
using namespace std;

void frequency(string s);

int main()
{
    string s;
    cout<<"Enter a line : ";
    getline(cin, s);

    frequency(s);

    return 0;
}

void frequency(string s)
{
    int v=0,c=0,d=0,sp=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            v++;
        }
        else
        {
            if(s[i]==' ')
            {
                sp++;
            }
            else if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'
                  ||s[i]=='7'||s[i]=='8'||s[i]=='9')
            {
                d++;
            }
            else
            {
                c++;
            }    
        }
    }
    cout<<"Vowel : "<<v<<endl;
    cout<<"Consonant : "<<c<<endl;
    cout<<"Digit : "<<d<<endl;
    cout<<"Space : "<<sp<<endl;
}