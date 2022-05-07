#include <iostream>
using namespace std;

int main()
{
    int b, m, n;
    cout<<"Enter the budget : ";
    cin >> b;
    cout<<"Enter the number of keybrods : ";
    cin >> n;
    cout<<"Enter the number of drives : ";
    cin >> m;
    int k[n];
    int d[m];
    cout<<"Enter the price of keybrods"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    cout<<"Enter the price of drives"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }
    int sum = 0;
    int max = -1;
    if (n >= m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = k[i] + d[j];
                if (sum <= b && max <= sum)
                {
                    max = sum;
                }
            }
        }
    }
    else if (m > n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (k[j] + d[i] <= b)
                {
                    sum = k[j] + d[i];
                    if (max <= sum)
                    {
                        max = sum;
                    }
                }
            }
        }
    }
    cout <<"Answer : "<< max;

    return 0;
}