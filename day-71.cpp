#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *head1;
    struct Node *head2;
} *first = NULL;
void create(int a[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
}
int intersectPoint(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
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
    ptr1 = head1;
    ptr2 = head2;
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