#include <iostream>
using namespace std;

string replaceSpaces(string &str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

string replaceSpace(string &str)
{

    int l = str.length();
    string rep = "@40";
    for (int i = 0; i <=l; i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, rep);
        }
    } // having some problem here 
    return str;
}

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);

    string ans = replaceSpaces(s);
    cout << ans << endl;

    string ans1 = replaceSpace(s);
    cout << ans1 << endl;

    return 0;
}