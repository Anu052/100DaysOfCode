#include<bits/stdc++.h>
using namespace std;
struct node
{
struct node *random;
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
 struct node* copyRandomList(struct node* head) {
     if(head==NULL) return NULL;
        node*temp=head;
        while(temp!=NULL){
            node* newNode=new node(temp->data);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->random!=NULL) temp->next->random=temp->random->next;
            else temp->next->random=NULL;
            temp=temp->next->next;
        }
        temp=head;
        node*Head=temp->next,*newTemp=temp->next;
        while(temp!=NULL){
            if(temp->next!=NULL && newTemp->next!=NULL){
                temp->next=temp->next->next;
                newTemp->next=newTemp->next->next;    
            }
            else{
                temp->next=NULL;
                newTemp->next=NULL;
            }
            temp=temp->next;
            newTemp=newTemp->next;
        }
        return Head;
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