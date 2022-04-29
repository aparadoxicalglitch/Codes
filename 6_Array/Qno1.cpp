#include <iostream>
using namespace std;

int main()
{
    float ar[100], sum = 0.0;
    int n, e;
    cout << "Enter the number of elements you want to enter : ";
    cin >> n;
    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Enter the elements : ";
        cin >> e;
        ar[i] = e;
        // cout<<"Enterd elemnts is : "<<ar[i]<<endl;
        sum = sum + ar[i];
    }
    float avg = sum / n;
    cout << sum << endl;
    cout << "Average : " << avg << endl;
    return 0;
}