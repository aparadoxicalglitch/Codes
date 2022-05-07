#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int s;
    cout<<"Enter the size : ";
    cin>>s;
    int e;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int> vec;
    cout<<"Enter the elements of the vector"<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>e;
        vec.push_back(e);
    }
    vector<vector<int>> ans;
    ans = pairSum(vec,n);
    cout<<"Displaying the answer"<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans.size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}