#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string : ";  
    getline(cin, s);

    cout<<"The length of the given string is : "<<s.length()<<endl;

    return 0;
}