#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* prev;
    node* next;

    node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class doublyLinkedList{
public:
    node* head;
    node* tail;

    doublyLinkedList(){
        head = NULL;
        tail = NULL;
        
    }

    void insertAtTail(int val)
    {
        node* new_node = new node(val);
        if(tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void display()
    {
        node* temp = head;
        while(temp)
        {
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void reverseLL(node* &head, node* &tail)
{
    node* curr = head;
    //* reversing the links 
    while(curr)
    {
        node* next_ptr = curr->next;
        curr->next = curr->prev;
        curr->prev = next_ptr;
        curr = next_ptr;
    }

    //* swapping head and tail 
    node* new_head = tail;
    tail = head;
    head = new_head;
}

int main()
{
        doublyLinkedList l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(8);
    l1.insertAtTail(6);
    l1.insertAtTail(10);
    l1.display();
    reverseLL(l1.head,l1.tail);
    l1.display();

}