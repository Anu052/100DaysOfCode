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
    for (int i = 0; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
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
struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct node *reverse(struct node *head)
{
    node *curr = head;
    node *next;
    node *pre = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}
struct node *compute(struct node *head)
{
    head = reverse(head);
    node *curr = head;
    int ma = head->data;
    node *prev = head;
    head = head->next;
    while (head)
    {
        if (head->data >= ma)
        {
            ma = head->data;
            prev = head;
            head = head->next;
        }
        else
        {
            prev->next = head->next;
            head = prev->next;
        }
    }
    head = reverse(curr);
    return head;
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        create(a, n);
        display(first);
        cout << "after running the funnction" << endl;
        struct node *st;
        st = compute(first);
        display(st);
    }
}