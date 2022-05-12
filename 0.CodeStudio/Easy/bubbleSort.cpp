#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
	for(int i=1;i<n;i++)
	{//for round 1 to n-1
		for(int j=0;j<n-i;j++)
		{// process element till n-ith index
			if(arr[j]>arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
	}
    for(int i=0;i<n;i++)
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
    cout<<"Enter the elements of the vetcor"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        vec.push_back(e);
    }

    cout<<"Elements after sorting"<<endl;
    bubbleSort(vec,n);
    
    return 0;
}