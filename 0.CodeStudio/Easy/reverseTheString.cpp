#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}
string reverseString(string str)
{
    reverse(str, 0, str.length() - 1);
    return str;
}

int main()
{
    string name = "abcde";
    cout << endl;
    // reverse(name, 0, name.length() - 1);
    // cout << endl;
    // cout << name << endl;
    string reverse = reverseString(name);

    cout << reverse << endl;

    return 0;
}
