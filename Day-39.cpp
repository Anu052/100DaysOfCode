#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *left;
    struct Node *right;
} *first = NULL;
void create(int a[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void preOrder(Node *root, vector<int> &arr)
{
    if (root)
    {
        arr.push_back(root->data);
        preOrder(root->left, arr);
        preOrder(root->right, arr);
    }
}
vector<int> preOrder(Node *root)
{
    // Your code here
    vector<int> ans;
    preOrder(root, ans);
    return ans;
}