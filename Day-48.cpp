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

vector<int> zigzag(struct node *root)
{
    vector<int> ans;
    queue<node *> q;
    q.push(root);
    int f = 1;
    while (!q.empty())
    {
        vector<int> temp;
        int sz = q.size();
        while (sz--)
        {
            node *t = q.front();
            temp.push_back(t->data);
            q.pop();
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
        if (f % 2 == 0)
        {
            reverse(temp.begin(), temp.end());
        }
        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[i]);
        }
        f = !f;
    }
    return ans;
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