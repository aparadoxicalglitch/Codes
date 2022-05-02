#include<iostream>
using namespace std;

int wordcount(string s);

int main()
{
    string s;
    cout<<"Enter a line : "; 
    getline(cin, s);

    cout<<"The number of words in the line are : "<<wordcount(s)<<endl;

    return 0;
}

int wordcount(string s)
{
    int w=1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            w++;
        }
    }
    return w;
}