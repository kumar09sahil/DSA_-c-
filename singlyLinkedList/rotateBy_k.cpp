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

node* rotateBY_k(node* &head, int k)
{
    //* take out the length and find the tail node
    int n=0;
    node*tail = head;
    while(tail->next)
    {
        tail = tail->next;
        n++;
    }
    n++;

    k = k%n;
    if(k==0)
        return head;
    
    node* temp = head;

    //* find (n-k)th element 
    for(int i=0;i<n-k-1;i++)
    {
        temp  = temp->next;
    } 
    tail->next = head; //* connecting the last element
    head = temp->next; //* (n-k+1)th element becomes the head element
    temp->next = NULL; //* n-kth element becomes the last element;

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
    l1.head = rotateBY_k(l1.head,1);
    l1.display();
    return 0;
}