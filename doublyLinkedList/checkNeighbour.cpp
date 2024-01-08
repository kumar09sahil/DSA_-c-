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

void checkNeighbour(node* &head, node* &tail)
{
    node* curr = tail->prev;
    while(curr != head)
    {
        node* prevnode = curr->prev;
        node* nextnode = curr->next;
        //* deleting the node if their neighbour have the same value
        if(curr->prev->val == curr->next->val)
        {
            prevnode->next = nextnode;
            nextnode->prev = prevnode;
            free(curr);
        }
        curr = prevnode;
    }
}

int main()
{
    doublyLinkedList l1;
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.display();
    checkNeighbour(l1.head, l1.tail);
    l1.display();
}