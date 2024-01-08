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

bool isPalindrome(node* &head)
{
    if(!head->next)
    {
        return true;
    }
    //* 1.take out the middle element using the slow and fast pointer method
    node* slow = head;
    node* fast = head;
    while(fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next->next;
    } 
    
    //* 2.creating two parts 
    node*curr = slow->next;
    node*prev = slow;
    slow->next = NULL;

    //* 3.reversing the second part of the linked list 
    while(curr)
    {
        node*after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
    }

    //* 4. checking if both are equal or not
    node* head1 = head;
    node* head2 = prev;
    while(head2)
    {
        if(head1->val != head2->val)
            return false;
        
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
    
}

int main()
{
    linkedList l1;
    l1.head=NULL;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(3);
    l1.insertAtTail(2);
    l1.insertAtTail(1);
    l1.display();
    cout<<isPalindrome(l1.head);
    return 0;
}