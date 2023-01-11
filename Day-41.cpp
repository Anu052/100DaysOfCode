#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *left;
    struct node *right;
} *first = NULL;
void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 0; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
struct node *lca(struct node *root, int n1, int n2)
{
    if (!root)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *l = lca(root->left, n1, n2);
    node *h = lca(root->right, n1, n2);
    if (l && h)
        return root;
    if (l)
        return l;
    else
        return h;
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
        cin >> t;
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