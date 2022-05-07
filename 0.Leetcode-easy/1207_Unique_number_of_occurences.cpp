#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        vector<int> occurrence;
        sort(arr.begin(), arr.end()); // to sort the vector
        int digit = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != digit)
            {
                int num = count(arr.begin(), arr.end(), arr[i]); // to count the occurrence of each element
                occurrence.push_back(num); // and then to store it to vector named occurrence
                digit = arr[i]; 
            }
        }

        for (int i = 0; i < occurrence.size(); i++)
        {
            int n = count(occurrence.begin(), occurrence.end(), occurrence[i]);
            if (n > 1)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    
    vector<int> vec;
    int e;
    int size; 
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the elements : ";
        cin>>e;
        vec.push_back(e);
    }   
    if(s.uniqueOccurrences(vec))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}