#include<iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout<<"Enter the 1st word : ";
    getline(cin, s1);
    cout<<"Enter the 2nd word : ";
    getline(cin, s2);

    cout<<"The string after concatenate : "<<s1+' '+s2;

    return 0;
}