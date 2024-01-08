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

node* rearrage(node* &head)
{
    //* find the middle element for creating to half
    node* slow = head; 
    node* fast = head; 
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    //* reverse the element after midlle 
    node* curr = slow->next;
    node*prev = slow;
    slow->next = NULL;
    while(curr)
    {
        node* after = curr->next;
        curr->next = prev;
        prev = curr;
        curr= after;
    }

    //* creating the new links for rearrangements
    node* head1 = head;
    node* head2 = prev;
    while(head1 != head2)
    {
        node* temp = head1->next;
        head1->next = head2;
        head1 = head2;
        head2 = temp;
    }
    return head;
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
    l1.head=rearrage(l1.head);
    l1.display();
}