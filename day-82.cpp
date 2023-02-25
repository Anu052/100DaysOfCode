#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} *first = NULL;
unordered_map<Node *, int> dp;
int getMaxSum(Node *root)
{
    if (!root)
        return 0;
    if (dp[root])
        return dp[root];
    int inc = root->data;
    if (root->left)
    {
        inc += getMaxSum(root->left->left);
        inc += getMaxSum(root->left->right);
    }
    if (root->right)
    {
        inc += getMaxSum(root->right->left);
        inc += getMaxSum(root->right->right);
    }
    int exc = getMaxSum(root->left) + getMaxSum(root->right);
    dp[root] = max(inc, exc);
    return dp[root];
}