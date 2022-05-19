#include <iostream>
using namespace std;
#include <bits/stdc++.h>

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // reverse array
        reverse(matrix.begin(), matrix.end());
        for (int row = 0; row < matrix.size(); row++)
        {
            for (int col = row + 1; col < matrix[0].size(); col++)
            {
                // swap elements
                swap(matrix[row][col], matrix[col][row]);
            }
        }
    }
};

int main()
{
    Solution s;
    vector<vector<int>> a;
    int r, c;
    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "Enter the number of columns : ";
    cin >> c;
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        vector<int> vec;
        for (int j = 0; j < c; j++)
        {
            int e = 0;
            cin >> e;
            vec.push_back(e);
        }
        a.push_back(vec);
    }

    s.rotate(a);

    cout << "Printing the image of matrix " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//              OR

// int main()
// {
//     vector<vector<int>> a;
//     int r,c;
//     cout<<"Enter the number of rows : ";
//     cin>>r;

//     cout<<"Enter the number of columns : ";
//     cin>>c;
//     cout<<"Enter the elements of the matrix"<<endl;
//     for(int i=0; i<r; i++)
//     {
//         vector<int> vec;
//         for(int j=0; j<c; j++)
//         {
//             int e=0;
//             cin>>e;
//             vec.push_back(e);
//         }
//         a.push_back(vec);
//     }
//     reverse(a.begin(),a.end());
//     // cout<<"Printing the reverse matrix "<<endl;
//     // for(int i=0; i<r; i++)
//     // {
//     //     for(int j=0; j<c; j++)
//     //     {
//     //         cout<<a[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     cout<<"Printing the image of matrix "<<endl;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<r; j++)
//         {
//             cout<<a[j][i]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }