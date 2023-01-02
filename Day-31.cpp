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
void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
//User function Template for C++

#include<bits/stdc++.h>
class Solution{
public:
    struct node *moveToFront(struct node *head){
    if(head->next == NULL)
       return head;
       struct node * temp = head;
       
       while(temp->next->next != NULL)
       temp = temp->next;
       
       struct node * x = new node(temp->next->data);
       temp->next = NULL;
       x->next = head;
       head = x;
       return head;
    }
};
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
        func(first);
        cout << "after running func function" << endl;
        display(first);
    }
}