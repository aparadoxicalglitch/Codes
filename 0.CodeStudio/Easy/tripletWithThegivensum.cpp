#include <iostream>
using namespace std;
#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int left, right;
    for (int i = 0; i < n - 2; i++)
    {
        left = i + 1;
        right = n - 1;
        while (left < right)
        {
            if (arr[left] + arr[right] + arr[i] == K)
            {
                ans.push_back({arr[i], arr[left], arr[right]});
            }
            else if (arr[left] + arr[right] + arr[i] < K)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the vector :";
    cin >> n;
    int k;
    cout << "Enter the number :";
    cin >> k;
    int e;
    vector<int> vec;
    cout << "Enter the elements of vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        vec.push_back(e);
    }
    vector<vector<int>> ans;
    ans = findTriplets(vec, n, k);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout<<ans[i][j]<<" ";    
        }
        cout<<endl;
    }

    return 0;
}
// sort(arr.begin(),arr.end());
// 	vector<vector<int>>v;    
    
//     for(int i=0; i<arr.size()-2; i++){
//         if(i==0 || (i>0 && arr[i]!=arr[i-1])){
//             int low=i+1, high=arr.size()-1, target=K-arr[i];
            
//             while(low<high){
//                 if(arr[low]+arr[high]==target){
//                     vector<int>temp;
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[low]);
//                     temp.push_back(arr[high]);
//                     v.push_back(temp);

//                     while(low<high && arr[low]==arr[low+1]){
//                         low++;
//                     }
//                     while(low<high && arr[high]==arr[high-1]){
//                         high--;
//                     }
//                     low++;
//                     high--;
//                 }else if(arr[low]+arr[high]<target){
//                     low++;
//                 }else{
//                     high--;
//                 }
//             }
//         }
//     }
//     return v;