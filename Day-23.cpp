#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
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
int merge(struct node *a, struct node *b)
{
    node *ptr1 = a;
    node *ptr2 = b;
    int c1 = 0, c2 = 0;
    while (ptr1)
    {
        c1++;
        ptr1 = ptr1->next;
    }
    while (ptr2)
    {
        c2++;
        ptr2 = ptr2->next;
    }
    ptr1 = a;
    ptr2 = b;
    int diff = abs(c1 - c2);
    if (c1 > c2)
    {
        for (int i = 0; i < diff; i++)
        {
            ptr1 = ptr1->next;
        }
    }
    if (c2 > c1)
    {
        for (int i = 0; i < diff; i++)
        {
            ptr2 = ptr2->next;
        }
    }
    while (ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (ptr1)
        return ptr1->data;
    else
        return -1;
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