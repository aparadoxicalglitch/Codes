#include <iostream>
using namespace std;

int main() {
    int w[4];
    int s=0;
    for(int i=1;i<=4;i++)
    {
        cin>>w[i];
    }
    for(int i=1;i<=4;i++)
    {
        if(w[i]>=10)
        {
            s++;
        }
    }
    cout<<s;
	return 0;
}
