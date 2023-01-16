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
vector<int> topview(struct node *root)
{
    vector<int> ans;
    map<int, int> mp;
    queue<pair<node *, int>> q;
    if (!root)
    {
        return ans;
    }
    q.push({root, 0});
    while (!q.empty())
    {
        node *t = q.front().first;
        int h = q.front().second;
        q.pop();
        if (!mp[h])
        {
            mp[h] = t->data;
        }
        if (t->left)
            q.push({t->left, h - 1});
        if (t->right)
            q.push({t->right, h + 1});
        for (auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
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
int main()
{
    int t;
    cout << "enter the test case value" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of array" << endl;
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