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
  struct node* func(node* head) {
   if(!head){
            return NULL;
        }
        
        node* evenHead = NULL;
        node* evenTail = NULL;
        node* oddHead = NULL;
        node* oddTail = NULL;
        
        int k = 0;
        node *ptr = head;
        
        while(ptr){
            if(k%2 == 0){
                if(evenHead == NULL){
                    evenHead = ptr;
                    evenTail = ptr;
                }else{
                    evenTail->next = ptr;
                    evenTail = evenTail->next;
                }
                ptr = ptr->next;
                evenTail->next = NULL;
                k++;
            }else{
                if(oddHead == NULL){
                    oddHead = ptr;
                    oddTail = ptr;
                }else{
                    oddTail->next = ptr;
                    oddTail = oddTail->next;
                }
                ptr = ptr->next;
                oddTail->next = NULL;
                k++;
            }
        }
        evenTail->next = oddHead;
        return evenHead;
    }
void display(struct node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
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
        struct node* st;
        st=func(first);
        cout << "after running func function" << endl;
        display(st);
    }
}