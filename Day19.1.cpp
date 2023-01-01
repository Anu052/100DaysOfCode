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
int findmid(struct node *head)
{
    node *low = head;
    node *high = head;
    node *mid = NULL;
    while (high != NULL and high->next != NULL)
    {
        low = low->next;
        high = high->next->next;
    }
    if (high != NULL)
    {
        mid = low->next;
    }
    else
    {
        mid = low;
    }
    return low->data;
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
        cout << "after this you get your middle value" << endl;
        int st;
        st = findmid(first);
        cout << st << endl;
    }
}