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

bool compare(node* &head1, node* &head2)
{
    node* ptr1 = head1;
    node* ptr2 = head2;
    while(ptr1!= NULL && ptr2!=NULL)
    {

        if(ptr1->val != ptr2->val)
            return false;

        ptr1= ptr1->next;
        ptr2 = ptr2->next;
    }
    //* either ptr1 or ptr2 is null or both are null

    return (ptr1== NULL && ptr2 == NULL);
}

int main()
{
    linkedList l1;
    linkedList l2;
    l2.head = NULL;
    l1.head=NULL;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    l1.insertAtTail(7);

    l2.insertAtTail(1);
    l2.insertAtTail(2);
    l2.insertAtTail(3);
    l2.insertAtTail(4);
    l2.insertAtTail(5);
    l2.insertAtTail(6);
    l2.insertAtTail(7);

    l1.display();
    l2.display();

    cout<<compare(l1.head, l2.head);
    
}