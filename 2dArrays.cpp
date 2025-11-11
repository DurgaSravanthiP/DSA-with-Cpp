#include <iostream>
using namespace std;
// normal linear search
// bool linearSearch(int matrix[][3],int rows,int cols, int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(matrix[i][j]==key) return true;
//         }
//     }
//     return false;
// }

// returing the cell or indexes matching with the key.
pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key)
{
    pair<int, int> p = {-1, -1};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == key)
                return p = {i, j};
        }
    }
    return p;
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << matrix[2][1] << endl;
    pair<int, int> p = linearSearch(matrix, 3, 3, 8);
    cout << p.first << " " << p.second << endl;
    return 0;
}