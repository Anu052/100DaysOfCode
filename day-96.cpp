#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
struct Node *next;
}*first=NULL;
struct Node* reverse (struct Node* head)
    {
        if (!head || !head->next)
            return head;
        
        Node* prev = NULL, *curr = head;
        
        while (curr)
        {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* p1 = reverse(first);
        Node* p2 = reverse(second);
        
        Node* pre_head = new  Node(0);
        Node* temp = pre_head;
        
        int carry = 0, mult = 1;
        
        while(p1 || p2 || carry)
        {
            int sum = 0;
            
            if (carry)
                sum += carry;
            
            if (p1)
            {
                sum += p1->data;
                p1 = p1->next;
            }
                
            
            if (p2)
            {
                sum += p2->data;
                p2 = p2->next;
            }
                
                
            temp->next = new Node(sum%10);
            temp = temp->next;
            
            carry = sum/10;
        }
        
        temp->next = NULL;
        Node* head = reverse(pre_head->next);
        return head;
    }