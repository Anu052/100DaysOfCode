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
    first->next = first;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
int length(struct node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}
int Delete(struct node *p, int index)
{
    struct node *q;
    int i, x;

    if (index < 0 || index > length(first))
        return -1;
    if (index == 1)
    {
        while (p->next != first)
            p = p->next;
        x = first->data;
        if (first == p)
        {
            free(first);
            first = NULL;
        }
        else
        {
            p->next = first->next;
            free(first);
            first = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}
void display(struct node *p)
{
    do
    {
        cout << p->data << endl;
        p = p->next;
    } while (p != first);
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
        cout << "enter the array elements" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int index, x;
        cout << "enter the index value" << endl;
        cin >> index;
        cout << "enter the value" << endl;
        cin >> x;
        create(a, n);
        display(first);
        cout << endl;
        //insert1(first, index, x);
        display(first);
    }
}