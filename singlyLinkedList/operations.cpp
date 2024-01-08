#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int data){
        val = data;
        next =NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node*new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(node* &head,int val)
{
    node *new_node = new node(val);
    node*temp =head;
    while(temp->next!=NULL)
    {
        temp = temp->next;   
    }
    temp->next=new_node;
}

void insertAtArbitarypos(node* &head,int val, int pos)
{
    if(pos==0)
    {
        insertAtHead(head,val);
    }
    node* new_node = new node(val);
    node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void deleteAtHead(node* &head)
{
    node*temp= head;
    head = head->next;
    free(temp);
}

void deleteAttail(node* &head)
{
    node* temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    node * last = temp->next;
    temp->next = NULL;
    free(last);
}

void deleteAtArbitarypos(node* &head,int pos)
{
    node* temp = head;
    if(pos==0)
    {
        deleteAtHead(head);
    }
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    node* item = temp->next;
    temp->next = temp->next->next;
    free(item);
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main()
{
    node* head=NULL;
    insertAtHead(head,3);
    deleteAtHead(head);
    insertAtHead(head,8);
    insertAtHead(head,12);
    insertAtHead(head,6);
    insertAtHead(head,4);
    insertAtTail(head,7);
    insertAtArbitarypos(head,10,2);
    deleteAttail(head);
    deleteAtArbitarypos(head,3);
    display(head);
    return 0;
}