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

node* deletekthFromBack(node* &head, int k)
{
    //*if only one element present
    if(head->next == NULL)
    {
        node* temp = head;
        free(temp);
        return NULL;
    }
    node* first=head;
    node* end = head;
    while(k--)
    {
        end = end->next;
    }

    //* if kth element is equal to the length of the linked list
    if(end == NULL)
    {
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    while(end->next!=NULL)
    {
        first = first->next;
        end = end->next;
    }
    node*temp = first->next;
    first->next = first->next->next;
    free(temp);
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
    l1.head=deletekthFromBack(l1.head,7);
    l1.display();
}