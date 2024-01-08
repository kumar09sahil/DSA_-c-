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

node* move(node* &head,int n)
{
    for(int i=0;i<n;i++)
    {
        head = head->next;
    }
    return head;
}

int length(node* &head1)
{
    node* temp = head1;
    int n=0;
    while(temp)
    {
        n++;
        temp=temp->next;
    }
    return n;
}
int intersectionPoint(node* &head1, node* &head2)
{
    int n=length(head1);
    int k=length(head2);
    if(n>k)
    {
        head1 = move(head1,n-k);
    }
    else
    {
        head2 = move(head2,k-n);
    }
    node*ptr1 = head1;
    node*ptr2 = head2;
    while(ptr1)
    {
        if(ptr1 == ptr2)
            return ptr1->val;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
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
    
    l2.insertAtTail(11);
    l2.insertAtTail(25);
    l2.insertAtTail(36);
    l2.insertAtTail(9);
    l2.head->next->next->next = l1.head->next->next; 

    l1.display();
    l2.display();

    cout<<intersectionPoint(l1.head,l2.head);
    
}