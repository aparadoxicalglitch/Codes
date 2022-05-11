#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
				minIndex=j;
		}
		swap(arr[minIndex],arr[i]);
	}
    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;

    vector<int> vec;
    int e;
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        vec.push_back(e);
    }
    cout<<"Elemnts after sorting"<<endl;
    selectionSort(vec,n);
    return 0;
}