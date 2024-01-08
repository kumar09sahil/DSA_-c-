#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

class linkedlist{
public:
    node* head;

    void insertAtTail(int data)
    {
        node *new_node = new node(data);
        if(head == NULL)
        {
            head=new_node;
            return;
        }
        else 
        {
            node *temp=head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next=new_node;
        }
    }
};

void deleteAlternative(node* &head)
{
    node*curr =head;
    while (curr != NULL && curr->next != NULL)
    {
        node* temp=curr->next;
        curr->next = curr->next->next;
        free(temp);
        curr = curr->next;
    }
}

void deleteDuplicate(node* &head)
{
    node *curr = head;
    while(curr!=NULL)
    {
        while(curr->next!=NULL && curr->val == curr->next->val)
        {
            //* deleting next node if equal
            node* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        } 
        // * this loop ends if next value is different
        // * or when linkedlist ends
        curr = curr->next;
    }
}

void reversedprint(node* &head)
{
    if(head== NULL)
    return;
    else
    {
        reversedprint(head->next);
        cout<<head->val<<" ";
    }
}

void reversingLinkedlist(node* &head)
{
    node*curr = head;
    node* prev = NULL;
    while(curr != NULL)
    {
        node* after = curr->next;
        curr->next = prev;
        prev=curr;
        curr=after;
    }
    head = prev;
}

node* reversellRecursion(node* head)
{
    if(head==NULL || head->next == NULL)
        return head;
    
        node *new_head=reversellRecursion(head->next);
        head->next->next = head;
        head->next=NULL;  //* head pointing to last node
        return new_head;
}

node* reverseKthElement(node* &head, int k)
{
    node*curr =head;
    node*prev = NULL;
    int counter =0;
    while(curr!=NULL && counter<k)
    {
        node* after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
        counter++;
    }

    if(curr!=NULL)
    {
        node*new_head = reverseKthElement(curr,k);  
        head->next  = new_head;
    }
    return prev;
}

void display(node*head){
    node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    linkedlist l1;
    l1.head=NULL;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(3);
    l1.insertAtTail(3);
    l1.insertAtTail(5);
    l1.insertAtTail(5);
    display(l1.head);
    // deleteAlternative(l1.head);
    // deleteDuplicate(l1.head);
    // cout<<"after modification :  ";
    // display(l1.head);
    // reversedprint(l1.head);
    // reversingLinkedlist(l1.head);
    // display(l1.head);
    // l1.head = reversellRecursion(l1.head);
    // display(l1.head);
    l1.head = reverseKthElement(l1.head,2);
    display(l1.head);

    return 0;
}
