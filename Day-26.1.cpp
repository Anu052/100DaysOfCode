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
        t->pre = t->next = NULL;
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
int dele(struct node *p, int index)
{
    struct node *q;
    int x = -1, i;
    if (index < 0 || index > length(p))
    {
        return -1;
    }
    if (x == 1)
    {
        first = first->next;
        if (first)
            first->pre = NULL;
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->pre->next = p->next;
        if (p->next)
            p->next->pre = p->pre;
        x = p->data;
        free(p);
    }
    return x;
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
        int k;
        cout << "enter the target index" << endl;
        cin >> k;
        create(a, n);
        display(first);
        dele(first, k);
        display(first);
    }
}