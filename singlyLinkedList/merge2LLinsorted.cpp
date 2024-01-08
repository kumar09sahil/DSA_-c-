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

node* merge(node* &head1, node* &head2)
{
    node* head3 = NULL;
    node* ptr1 = head1;
    node* ptr2 = head2;
    
    if(ptr1->val <= ptr2->val)
    {
        head3=ptr1;
        ptr1=ptr1->next;
    }
    else
    {
        head3=ptr2;
        ptr2=ptr2->next;
    }
    node* ptr3 = head3;
    while(ptr1!= NULL && ptr2!=NULL)
    {
        if(ptr1->val <= ptr2->val)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while(ptr1)
    {
        ptr3->next = ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2)
    {
        ptr3->next = ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return head3;
}

int main()
{
    linkedList l1;
    l1.head=NULL;
    l1.insertAtTail(1);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(9);
    l1.insertAtTail(11);
    l1.display();

    linkedList l2;
    l2.head=NULL;
    l2.insertAtTail(2);
    l2.insertAtTail(6);
    l2.insertAtTail(7);
    l2.insertAtTail(10);
    l2.display();
    l1.head = merge(l1.head,l2.head);
    l1.display();
    return 0;
}