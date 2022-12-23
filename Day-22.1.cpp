#include<bits/stdc++.h>
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
int nthnode(node *head, int n)
{
    node *first = head;
    node *second = head;
    for (int i = 1; i < n; i++)
    {
        second = second->next;
        if (second == NULL)
            return -1;
    }
    while (second->next)
    {
        first = first->next;
        second = second->next;
    }
    return first->data;
}
void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
    void insertAtTail(node* &tail,node* curr)
    {
        tail->next=curr;
        tail=curr;
    }
struct node* sortlist(struct node* head)
{
    node* zerohead=new node;
    node* zerotail=zerohead;
    node* onehead=new node;
    node* onetail=onehead;
    node* twohead=new node;
    node* twotail=twohead;
    node* curr=head;
    while(curr!=NULL)
    {
        int value=curr->data;
        if(value==0)
        {
            insertAtTail(zerotail,curr);
        }
        else if(value==1)
        {
            insertAtTail(onetail,curr);
        }
        else if(value==2)
        {
            insertAtTail(twotail,curr);
        }
        curr=curr->next;
    }
    if(onehead->next!=NULL)
    {
        zerotail->next=onehead->next;
    }
    else
    {
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
    head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}
int main()
{
    int t;
    cout<<"enter the testcase value"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter the size of array"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter the array elements"<<endl;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        create(a,n);
       /* display(first);*/
        struct node* st;
        st=sortlist(first);
        display(first);
    }
}