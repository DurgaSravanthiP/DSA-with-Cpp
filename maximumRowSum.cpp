#include <iostream>
using namespace std;
int maxRowSum(int matrix[][3], int rows, int cols)
{
    int maxsum = INT16_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
        maxsum = max(maxsum, sum);
    }
    return maxsum;
}
int main()
{
    int matrix[3][3] = {{100, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << maxRowSum(matrix, 3, 3) << endl;
    return 0;
}