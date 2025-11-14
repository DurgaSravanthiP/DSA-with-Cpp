#include <iostream>
using namespace std;
#include <vector>
vector<int> spiralMatrix(vector<vector<int>> mat)
{
    int m = mat.size(), n = mat[0].size();
    vector<int> ans;
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    while (srow <= erow && scol <= ecol)
    {
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }
        for (int i = srow + 1; i <= erow; i++)
        {
            ans.push_back(mat[i][ecol]);
        }
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++, scol++, erow--, ecol--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> ans = spiralMatrix(mat);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}