#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    for (int i = 0; i < n; i++)

        if (binary_search(matrix[i].begin(), matrix[i].end(), x))

            return true;

    return false;
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cout << "enter the values" << endl;
        cin >> n >> m;
        cout << "enter the input values" << endl;
        cin >> x;
        vector<vector<int>> matrix;
        search(matrix, n, m, x);
    }
}