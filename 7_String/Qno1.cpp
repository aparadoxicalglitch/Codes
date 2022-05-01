#include<iostream>
#include<string>

using namespace std;

int frequency(string s,char c);

int main()
{
    string s;
    char c;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<"Enter the character you want the frequency of : ";
    cin>>c;

    cout<<"The frequency of "<<c<<" in "<<s<<" is : "<<frequency(s,c)<<endl;

    return 0;
}

int frequency(string s,char c)
{
    int f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            f++;
        }
    }
    return f;
}