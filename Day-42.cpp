#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node* left;
    struct node* right;
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
int maxheight(struct node *root)
{
    int x,y;
    if(!root)
        return NULL;
    x=maxheight(root->left);
    y=maxheight(root->right);
    return max(x,y)+1;
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
    }
}