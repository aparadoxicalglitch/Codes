#include <bits/stdc++.h>
#include<iostream>

using namespace std;

void timeConversion(string s) 
{
    int hr = (s[0]-'0')*10 + (s[1]-'0'); // to convert string into integer ex:- 07 into 7 and 15 into 15 only
    
    cout<<"Military time : ";

    if(s[8]=='P'&& s[9]=='M' && hr==12)
    {
        cout<<to_string(hr);
    }
    else if(s[8]=='P'&& s[9]=='M')
    {
        cout<<to_string(hr+12);
    }
    else if(s[8]=='A'&& s[9]=='M'&&hr == 12)
    {
        cout<<"00";
    }
    else 
    {
        cout<<s[0]<<s[1];  
    }
    string t;
    for(int i=2; i<8;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    string s;
    cout<<"Enter the time in 12-hour format : ";
    getline(cin, s);
    
    timeConversion(s);


    return 0;
}
