#include<iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode* reverse(ListNode *head)
{
    ListNode *current = head;
    ListNode *temp = NULL;

    while(current != NULL)
    {
        ListNode *forward = current->next;

        current->next = temp;

        temp = current;

        current = forward;
    }

    return temp;
}