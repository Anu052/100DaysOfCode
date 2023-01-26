#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int c = 0;
bool solve1(struct node *root, int k)
{
    if (!root)
        return false;
    if (k == root->data)
        return true;
    bool x, y;
    x = false;
    y = false;
    if (k < root->data)
    {
        x = solve1(root->left, k);
    }
    else if (k > root->data)
    {
        y = solve1(root->right, k);
    }
    return x or y;
}
void solve(struct node *root1, struct node *root2, int x)
{
    if (!root1)
        return;
    solve(root1->left, root2, x);
    if (solve1(root2, x - root1->data))
        c++;
    solve(root1->right, root2, x);
}
void display(struct node *root)
{
    while (root != NULL)
    {
        cout << root->data << endl;
        root = root->next;
    }
}
int main()
{
    int t;
    cout << "enter the testcase value" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of array" << endl;
        cin >> n;
        int a[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        create(a, n);
        display(first);
    }
}