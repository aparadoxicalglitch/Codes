#include <iostream>
using namespace std;

int main()
{

    int i, j, k, n, count = 0;
    int array[100];

    cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j)
            {
                if ((array[i] + array[j]) % k == 0)
                    count++;
            }
        }
    }
    cout << count;

    return 0;
}