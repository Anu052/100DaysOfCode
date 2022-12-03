#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int a[100];
    int b[100];
    int n, m;
    cout << "Enter the size of first array" << endl;
    cin >> n;
    cout << "Enter the size of second array" << endl;
    cin >> m;
    cout << "Enter the first array entry" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the second array entry" << endl;
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    vector<int> arr1;
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr1.push_back(a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        arr2.push_back(b[j]);
    }
    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        answer.push_back(arr1[i]);
    }
    for (int j = 0; j < m; j++)
    {
        answer.push_back(arr2[j]);
    }
    sort(answer.begin(), answer.end());
    arr1.clear();
    for (int i = 0; i < answer.size(); i++)
    {
        arr1.push_back(answer[i]);
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr1[i] << "  ";
    }
}