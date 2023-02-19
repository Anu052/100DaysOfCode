#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *head;
    struct Node *pre;

} *first = NULL;
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *next;
    Node *pre = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}
Node *compute(Node *head)
{
    head = reverse(head);
    Node *curr = head;
    int ma = head->data;
    Node *prev = head;
    head = head->next;
    while (head)
    {
        if (head->data >= ma)
        {
            ma = head->data;
            prev = head;
            head = head->next;
        }
        else
        {
            prev->next = head->next;
            head = prev->next;
        }
    }
    head = reverse(curr);
    return head;
}
