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
void insert1(struct node *p,int index,int x)
{
    struct node *t;
    int i;
    if(index==0)
    {
        t=new node;
        t->data=x;
        if(first==NULL)
        {
            first=t;
            first->next=first;
        }
        else
        {
            while(p->next!=first)
            {
                p=p->next;
            }
                p->next=t;
                t->next=first;
                first=t;
        }

    }
    else
    {
      for(int i=0;i<index-1;i++)
      {
          p=p->next;
      }
          t=new node;
          t->data=x;
          t->next=p->next;
          p->next=t;
    }
}
void display(struct node *p)
{
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=first);
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
        int index,x;
        cout<<"enter the index value"<<endl;
        cin>>index;
        cout<<"enter the value"<<endl;
        cin>>x;
        create(a, n);
        display(first);
        cout<<endl;
        insert1(first,index,x);
        display(first);
    }
}