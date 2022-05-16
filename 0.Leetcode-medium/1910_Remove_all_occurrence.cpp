#include <iostream>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() != 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main()
{
    string s, part;
    cout << "Enter a string : ";
    cin >> s;

    cout << "Enter the part : ";
    cin >> part;

    Solution sl;
    string ans = sl.removeOccurrences(s, part);

    cout << ans << endl;

    return 0;
}