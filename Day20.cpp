#include<bits/stdc++.h>
using namespace std;
struct  node
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
bool findloop(struct node *head)
{
  if(!head)
            return false;
        node* low=head;
        node* high=head;
        while(high!=NULL and high->next!=NULL)
        {
            low=low->next;
            high=high->next->next;
            if(low==high)
                return true;
        }
        return false;
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
    cout<<"enter the test case value"<<endl;
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
      create(a,n);
     display(first);
     bool ans;
     ans=findloop(first);
     if(ans==true)
        cout<<"loop is present"<<endl;
     else
        cout<<"loop is not present"<<endl;
    }
}