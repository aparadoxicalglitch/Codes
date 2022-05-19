#include <iostream>
#include <vector>
using namespace std;
// TIme complexity is O(nxm) as it is traversing every element only once.
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        // index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total)
        {

            // print starting row
            for (int index = startingCol; count < total && index <= endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            // print ending column
            for (int index = startingRow; count < total && index <= endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // print ending row
            for (int index = endingCol; count < total && index >= startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // print starting column
            for (int index = endingRow; count < total && index >= startingRow; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> a;
    int r, c;
    cout << "Enter the number of rows : ";
    cin >> r;

    cout << "Enter the number of columns : ";
    cin >> c;
    cout << "Enter the elements of the matrix" << endl;
    // to take input in vector matrix
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
    Solution s;
    vector<int> ans;
    ans = s.spiralOrder(a);

    cout << "Printing the answer" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}