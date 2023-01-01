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
void deleteloop(struct node *head)
{
    node *low = head;
    node *high = head;
    while (high != NULL and high->next != NULL)
    {
        low = low->next;
        high = high->next->next;
        if (low == high)
            break;
    }
    if (low == head)
    {
        while (high->next != low)
        {
            high = high->next;
        }
        high->next != NULL;
    }
    else if (low == high)
    {
        low = high;
        while (low->next != high->next)
        {
            low = low->next;
            high = low->next;
        }
        high->next = NULL;
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