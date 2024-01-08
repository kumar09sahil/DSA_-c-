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

class circularLL{
public:
    node* head;

    circularLL(){
        head =NULL;
    }

    void insertatFirst(int val)
    {
        node* new_node = new node(val);
        if(head == NULL)
        {
            head = new_node;
            head->next = new_node;
            return;
        }
        node* tail = head;
        while(tail->next != head)
        {
            tail = tail->next;
        }
        new_node->next = head;
        head = new_node;
        tail->next = new_node;

    }

    void insertatlast(int val)
    {
        node* new_node = new node(val);
        if(head==NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        node* temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
    }
   
    void insertatArbitarypos(int val, int pos)
    {
        node* new_node = new node(val);
        if(pos == 0)
        {
            insertatFirst(val);
            return;
        }
        node* temp = head;
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteatfirst()
    {
        node* temp;
        if(head->next == NULL)
        {
            temp = head;
            head = NULL;
            free(temp);
            return;
        }
        node* tail = head;
        while(tail->next!= head)
        {
            tail = tail->next;
        }
        temp = head;
        head = head->next;
        tail->next = head;
        free(temp);
    }

    void deleteatlast()
    {
        node* temp ;
        if(head->next == NULL)
        {
            temp = head;
            head = NULL;
            free(temp);
            return;
        }
        node* tail = head;
        while(tail->next->next!=head)
        {
            tail = tail->next;
        }
        temp= tail->next;
        tail->next = head;
        free(temp);
    }

    void deleteatarbitarypos(int pos)
    {
        node*temp = head;
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        node* t = temp->next;
        temp->next = temp->next->next;
        free(t);
    }

    void display()
    {
        node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp!=head);
        cout<<endl;

        // node*t = head;
        //  for(int i=0;i<20;i++)
        // {
        //     cout<<t->val<<"->";
        //     t=t->next;
        // }
    }
};
int main()
{
    circularLL l1;
    l1.insertatFirst(3);
    l1.insertatFirst(5);
    l1.insertatFirst(6);
    l1.insertatFirst(2);
    l1.insertatFirst(1);
    l1.insertatlast(34);
    l1.insertatArbitarypos(54,6);
    l1.display();
    // l1.deleteatfirst();
    // l1.deleteatlast();
    l1.deleteatarbitarypos(3);
    l1.display();
}