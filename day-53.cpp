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
int ans;
void so(struct node *root, int k, int &idx)
{
    if (!root)
        return;
    so(root->right, k, idx);
    if (idx == k)
    {
        ans = root->data;
        idx++;
        return;
    }
    else
        idx++;
    so(root->left, k, idx);
}
int kthsmallest(struct node *root, int k1)
{
    if (!root)
        return NULL;
    ans = -1;
    int idx = 1;
    so(root, k1, idx);
    return ans;
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
    cout << "enter the size of array" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of array" << endl;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        create(a, n);
        display(first);
    }
}