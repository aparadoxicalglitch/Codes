#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter an english letter : ";  
    cin>>c;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u')
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else
    {
        cout<<c<<" is a consonant"<<endl;
    }
    return 0;
}