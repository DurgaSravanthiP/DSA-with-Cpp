#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>
vector<int> findMissingRepeating(vector<vector<int>> &grid)
{
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a, b;
    int exSum = 0, actSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actSum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    exSum = (n * n) * (n * n + 1) / 2;
    b = exSum + a - actSum;
    ans.push_back(b);
    return ans;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 9, 6}, {7, 8, 9}};
    vector<int> ans = findMissingRepeating(mat);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
