#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int data)
    {
        val = data;
        next=NULL;
    }
};

class linkedList{
public:
    node* head;

    void insertAtTail(int val)
    {
        node* new_node = new node(val);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        else{
            node*temp = head;
            while(temp->next !=NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void display()
    {
        node* temp = head;
        while(temp)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

node* swapeelement(node* &head)
{
    if(head ==NULL || head->next ==NULL)
    {
        return head;
    }
    node* second = head->next;
    head->next = swapeelement(second->next);
    second->next = head;
    return second;
}

int main()
{
    linkedList l1;
    l1.head=NULL;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(7);
    l1.display();
    l1.head=swapeelement(l1.head);
    l1.display();
}