#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;
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
long long multiplay(struct node* l1,struct node* l2)
{
    long long int num1=0,num2=0;
    long long int mod=1000000007;
    struct node *p1,*p2;
    p1=l1;
    p2=l2;
    while(p1!=NULL)
    {
        num1=(num1*10+(p1->data))%mod;
        p1=p1->next;
    }
    while(p2!=NULL)
    {
        num2=(num2*10+(p2->data))%mod;
        p2=p2->next;
    }
    return ((num1*num2)%mod);
}
void display(struct node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
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
