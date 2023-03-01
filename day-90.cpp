#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *t;
    struct Node *root;
    struct Node *left;
    struct Node *right;
};
vector<int> verticalOrder(struct Node *root)
{
    vector<int> res;
    if (root == NULL)
        return res;
    map<int, vector<int>> mv;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        Node *curr = p.first;
        int horizDist = p.second;
        mv[horizDist].push_back(curr->data);
        if (curr->left)
            q.push({curr->left, horizDist - 1});
        if (curr->right)
            q.push({curr->right, horizDist + 1});
    }
    for (const auto &el : mv)
        res.insert(res.end(), el.second.begin(), el.second.end());
    return res;
}
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of array" << endl;
        cin >> n;
        int a[n];
        cout << "enter the array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
}