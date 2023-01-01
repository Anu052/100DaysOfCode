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
bool ispalindrome(struct node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *pre = NULL;
    node *next;
    node *curr = slow;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    fast = head;
    while (pre != NULL)
    {
        if (fast->data != pre->data)
        {
            return false;
        }
        pre = pre->next;
        fast = fast->next;
    }
    return true;
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
        if (ispalindrome(first) == true)
            cout << "this is a pailndrome" << endl;
        else
            cout << "this is not pailndrome" << endl;
    }
}