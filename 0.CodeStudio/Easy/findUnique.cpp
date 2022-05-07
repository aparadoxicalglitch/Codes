#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    //Write your code here
	int ans = 0;
	for (int i=0;i<size;i++)
	{
        // we are using XOR here as ^ cancels out the two same element and return zero
		ans = ans ^ arr[i];
	}
	return ans;
}

int main()
{
    int s;
    cout<<"Enter the size of the array : ";
    cin>>s; 

    int a[10];
    cout<<"Enter the elements of the array"<<endl;
    for (int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Answer is : "<<findUnique(a,s)<<endl;
    return 0;
}