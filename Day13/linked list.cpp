#include<iostream>
using namespace std;

class Node 
{
        public:
        int data;
        Node *next;
         Node(int data)
         {
            this->data = data;
            this->next = NULL;
         }
};

    void printNodes(Node *head)
    {
        Node *current = head;
        while(current)
        { 
            cout << current -> data << endl;
            current = current -> next;
        }
    }
     int main()
     {
        Node *n1 = new Node(5);
        Node *n2 = new Node(6);
        Node *n3 = new Node(7);
        Node *n4= new Node(8);.
        Node *n5 = new Node(9);
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;
        n4->next = n5; 

        printNodes(n1);
        return 0;
         
        
     }