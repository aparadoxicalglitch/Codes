#include <iostream>
using namespace std;
#include <vector>

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    //  correct but taking too long to execute
    // 	vector<int> ans;
    // 	for(int i=0;i<n;i++)
    // 	{
    // 		int element = arr1[i];
    // 		for(int j =0;j<m;j++)
    // 		{
    // 			if(element == arr2[j])
    // 			{
    // 				ans.push_back(element);
    // 			    arr2[j]=-1;
    // 			    break;
    // 			}
    // 		}
    // 	}
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int n,m;
    cout<<"Enter the size of the respective vector"<<endl;
    cin>>n;
    cin>>m;
    int e1,e2;

    vector<int> vec1;
    vector<int> vec2;

    cout<<"Enter the elements of the first vector"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>e1;
        vec1.push_back(e1);
    }

    cout<<"Enter the elements of the second vector"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>e2;
        vec2.push_back(e2);
    }

    vector<int> ans;
    ans = findArrayIntersection(vec1,n,vec2,m);

    cout<<"Displaying the answer : ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}