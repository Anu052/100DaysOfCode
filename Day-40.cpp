#include <bits/stdc++.h>
using namespace std;
struct node1
{
    int data;
    struct node1 *next;
    struct node1 *left;
    struct node1 *right;
} *first = NULL;
void create(int a[], int n)
{
    struct node1 *t, *last;
    first = new node1;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 0; i < n; i++)
    {
        t = new node1;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node1 *p)
{
    while (!p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
void mirror(struct node1 *p)
{
    if (!p)
    {
        return;
    }
    mirror(p->left);
    mirror(p->right);
    swap(p->left, p->right);
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