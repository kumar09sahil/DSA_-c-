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

    void insertAtHead(int val)
    {
        node* new_node = new node(val);
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        head->prev = new_node;
        new_node->next = head;
        head = new_node;

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

    void insertArbitartPos(int val,int pos)
    {
        node* new_node = new node(val);
        node* temp = head;
        if(pos == 0)
            insertAtHead(val);
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        new_node->prev = temp;
        temp->next->prev = new_node;
        temp->next = new_node;   
    }

    void deletefirst()
    {
        if(head->next == NULL)
        {
            node* temp = head;
            head = NULL;
            tail = NULL;
            free(temp);
            return;
        }
        node*temp = head;
        head = head->next;
        free(temp);
    }

    void deletelast()
    {
          if(head->next == NULL)
        {
            node* temp = head;
            head = NULL;
            tail = NULL;
            free(temp);
            return;
        }
        node* temp = tail;
        tail->prev->next = NULL;
        free(temp);
    }

    void deleteAnyPos(int pos)
    {
        node* temp = head;
        for(int i=0 ; i<pos ; i++)
        {
            temp = temp->next;
        }
        node* p = temp;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(p);
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



int main()
{
    doublyLinkedList l1;
    l1.insertAtHead(3);
    l1.insertAtHead(4);
    l1.insertAtHead(5);
    l1.insertAtHead(6);
    l1.insertAtHead(7);
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(10);
    l1.insertArbitartPos(34,4);
    l1.display();
    l1.deleteAnyPos(3);
    l1.display();
}