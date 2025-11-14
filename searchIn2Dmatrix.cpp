#include <iostream>
using namespace std;
#include <vector>
bool searchInRow(vector<vector<int>> mat, int target, int row) // tc=o(logm)
{
    int m = mat.size();
    int n = mat[0].size();

    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> mat, int target) // tc=log(n)
{
    int m = mat.size(), n = mat[0].size();
    int startRow = 0, endRow = m - 1;
    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;
        if (mat[midRow][0] <= target && target <= mat[midRow][n - 1])
        {
            // found Row;
            bool x = searchInRow(mat, target, midRow);
            return x;
        }
        else if (target >= mat[midRow][n - 1])
        {
            // move right -> down
            startRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {30, 34, 45, 60}};
    int target = 34;
    bool t = searchMatrix(mat, target);
    cout << t << endl;
}