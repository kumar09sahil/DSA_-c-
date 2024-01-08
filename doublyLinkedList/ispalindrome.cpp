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

bool ispalindrome(node* &head, node* &tail)
{
    node* ptr1 = head;
    node* ptr2 = tail;
    while(ptr1 != ptr2)
    {
        if(ptr1->val != ptr2->val)
            return false;
        ptr1 = ptr1->next;
        ptr2 = ptr2->prev;
    }
    return true;
}

int main()
{
    doublyLinkedList l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(8);
    l1.insertAtTail(8);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.display();
    cout<<ispalindrome(l1.head,l1.tail);
    

}