#include<bits/stdc++.h>
using namespace std;

class node{
public:
    
    int val;
    node*next;

    node(int data)
    {
        
        val = data;
        next =  NULL;
    }
}; 

class Queue{
public:
    int capacity;
    int size; 
    node*head ;
    node*tail;

    Queue(int cap)
    {
        capacity = cap;
        size = 0;
        head = NULL;
        tail = NULL;
    }

    void enque(int val)
    {
        node* new_node = new node(val);
        if(size == capacity)
        {
            cout<<"--overflow--"<<endl;
            return;
        }
        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
            size++;
            return;
        }
        tail->next = new_node;
        tail = tail->next;
        size++;
    }

    void deque()
    {
        if(head == NULL)
        {
            cout<<"underflow";
        }
        if(head->next == NULL)
        {
            node*t = head;
            head=NULL;
            tail = NULL;
            delete t;
            size--;
            return;
        }
        node* t = head;
        head = head->next;
        delete t;
        size--;
    }

    bool isfull()
    {
        return size==capacity;
    }

    bool isempth()
    {
        return head==NULL;
    }

    int front()
    {
        if(head == NULL){
            cout<<"--underflow--";
            return -1;
            }
        return head->val;
    }

    int length()
    {
        return size;
    }

    void display()
    {
        node*temp = head;
        int l=size;
        while(l--)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    Queue Q(5);
    Q.enque(5);
    Q.enque(6);
    Q.enque(8);
    Q.enque(9);
    Q.enque(9);
    // Q.enque(9);
    Q.display();
    Q.deque();
    Q.deque();
    cout<<Q.isempth()<<endl;
    cout<<Q.isfull()<<endl;
    cout<<Q.front()<<endl;
    cout<<Q.length()<<endl;
    Q.display();
}