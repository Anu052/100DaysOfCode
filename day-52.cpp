#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *next;
}*first=NULL;
void create(int a[],int n)
{
struct node *t,*last;
first=new node;
first->data=a[0];
first->next=NULL;
last=first;
for(int i=0;i<n;i++)
{
    t=new node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}
int ans;
void so(struct node *root,int k,int &idx)
{
    if(!root)
        return;
    so(root->left,k,idx);
    if(idx==k)
    {
        ans=root->data;
        idx++;
        return;
    }
    else
        idx++;
    so(root->right,k,idx);
}
int kthsmallest(struct node *root,int k1)
{
    if(!root)
        return NULL;
    ans=-1;
    int idx=1;
    so(root,k1,idx);
    return ans;
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