#include <iostream>
using namespace std;

int main()
{
    int x1, x2, v1, v2;
    cin >> x1;
    cin >> v1;
    cin >> x2;
    cin >> v2;

    int r = 0;
    if ((v1 <= v2) || ((x2 - x1) % (v2 - v1)))
    {
        puts("NO");
    }
    else
    {
        puts("YES");
    }
}
