#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0)
        {
            int element = matrix[rowIndex][colIndex];

            if (element == target)
            {
                return 1;
            }

            if (element < target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> a;
    int r, c, target;
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
    cout << "Enter the target : ";
    cin >> target;

    if (s.searchMatrix(a, target))
    {
        cout << target << " is present";
    }
    else
    {
        cout << target << " is not present";
    }

    return 0;
}