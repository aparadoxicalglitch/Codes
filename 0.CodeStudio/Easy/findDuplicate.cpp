#include<iostream>
using namespace std;
#include<vector>

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int ans = 0;
	// XORing all array elements
	for(int i =0;i<arr.size();i++)
	{
		ans = ans^arr[i];
	}
	
	//XOR [1, n-1]
	for(int i=1;i<arr.size();i++)
	{
		ans = ans^i;
	}
	return ans;
}

int main()
{
    vector<int> vec;
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    int e;
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>e;
        vec.push_back(e);
    } 

    int ans = findDuplicate(vec);
    cout<<"Answer : "<<ans<<endl;   
    
    return 0;
}