#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int data)
    {
        val= data;
        next = NULL;
    }
};

class linkedlist{
public:
    node* head;
    linkedlist()
    {
        head = NULL;
    }

    void insertathead(int val)
    {
        node* new_node = new node(val);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        new_node->next = head;
        head = new_node;
    }

    void display()
    {
        node* temp = head;
        while(temp!= NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

node* removingDuplicate(node* &head)
{
    node*prev = NULL;
    node* temp = head;
    while(temp->next)
    {
        if(temp->val == temp->next->val)
        {
            while(temp->val == temp->next->val)
            {
                node*t = temp->next;
                temp->next = temp->next->next;
                free(t);
                temp = temp->next;
            }
            if(temp == head)
            {
                node* t =temp;
                head = temp->next;
                free(t);
            }
            else
            {
                node*t = temp;
                prev->next = temp->next;
                free(t);
            }
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}

int main()
{
    linkedlist l1;
    int n,d1;
    cout<<"--enter the size of first linkedlist--- ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"-- please enter the digit: ";
        cin>>d1;
        l1.insertathead(d1);
    }
    l1.display();
    l1.head = removingDuplicate(l1.head);
    l1.display();
}