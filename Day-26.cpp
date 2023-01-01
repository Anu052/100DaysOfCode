
#include <bits/stdc++.h>
using namespace std;
struct node
{
    struct node *pre;
    int data;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->pre = first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = last->next;
        t->pre = last;
        last->next = t;
        last = t;
    }
}
int length(struct node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if (index < 0 || index > length(p))
        return;
    if (index == 0)
    {
        t = new node;
        t->data = x;
        t->pre = NULL;
        t->next = first;
        first->pre = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new node;
        t->data = x;
        t->pre = p;
        t->next = p->next;
        if (p->next)
        {
            p->next->pre = t;
        }
        p->next = t;
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
        int n, x;
        cout << "enter the size of array" << endl;
        cin >> n;
        int a[n];
        cout << "enter the array element" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "enter the location where you want to insert element" << endl;
        cin >> x;
        int k;
        cout << "enter the number value" << endl;
        cin >> k;
        create(a, n);
        display(first);
        insert(first, x, k);
        display(first);
    }
}