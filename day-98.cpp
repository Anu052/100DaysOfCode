#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> mat)
    {
        int startRow = 0;
        int endRow = M - 1;
        int startCol = 0;
        int endCol = N - 1;

        while (startRow < endRow && startCol < endCol)
        {

            int prev = mat[startRow + 1][startCol];

            for (int i = startCol; i <= endCol; i++)
                swap(prev, mat[startRow][i]);

            startRow++;

            for (int i = startRow; i <= endRow; i++)
                swap(prev, mat[i][endCol]);

            endCol--;

            for (int i = endCol; i >= startCol; i--)
                swap(prev, mat[endRow][i]);

            endRow--;

            for (int i = endRow; i >= startRow; i--)
                swap(prev, mat[i][startCol]);

            startCol++;
        }

        return mat;
    }
};