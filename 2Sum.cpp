#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

vector<int> twoSum(vector<int> arr, int sum)
{
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int sec = sum - first;
        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main()
{
    vector<int> arr = {5, 2, 11, 7, 15};
    int sum = 9;
    vector<int> ans = twoSum(arr, sum);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}