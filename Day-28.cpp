#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int a[],int n)
{
    struct node *t,*last;
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
   node* removeNthFromEnd(node* head, int n) {
        node* start=new node();
        start->next=head;
        node* fast=start;
        node* last=start;
        for(int i=1;i<=n;i++)
        {
          fast=fast->next;  
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            last=last->next;
        }
        last->next=last->next->next;
           return start->next;
    }
void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    int t;
    cout<<'enter the test value'<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter the size of array"<<endl;
        cin>>n;
        int a[n];
        cout<<"enter the array element"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int index;
        cout<<"enter the index value"<<endl;
        cin>>index;
        create(a,n);
        display(first);
        cout<<"after running function"<<endl;
        removeNthFromEnd(first,index);
        display(first);
    }
}