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
int getcount(struct node *root,int l,int h)
{
    if(!root)
        return 0;
    if(root->data>=l && root->data<=h)
    {
        return 1+getcount(root->left,l,h)+getcount(root->right,l,h);
    }
    else if(root->data<l)
    {
        return getcount(root->right,l,h);
    }
    else
    {
        return getcount(root->left,l,h);
    }
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