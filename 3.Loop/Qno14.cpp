#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the range " << endl;
    cin >> n1;
    cin >> n2;
    bool p = true;
    while(n1<n2)
    {
        p = true;
        if(n1==0 || n1==1)
        {
            p = false;
        }
        else
        {
            for(int i=2; i<n1/2; i++)
            {
                if(n1%i==0)
                {
                    p = false;
                    break;
                }
            }
        }
        if(p)
        {
            cout<<n1<<" ";
        }
        n1++;
    }
    return 0;
}