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

class Stack{
    node* head;
    int size;
    int currSize;

    public:
    Stack(int c)
    {
        size = c;
        currSize=0;
        head = NULL;
    }

    void push(int x)
    {
        if(currSize >= size-1)
        {
            cout<<"--overflow--";
            return;
        }
        node*new_node = new node(x);
        new_node->next = head;
        head = new_node;
        currSize++;
    }

    int pop()
    {
        if(head == NULL)
        {
            cout<<"--underflow--";
            return -1;
        }
        node* temp = head;
        head = head->next;
        int res = temp->val;
        delete temp;
        currSize--;
        return res;
    }

    int gettop()
    {
        if(head == NULL)
        {
            cout<<"--underflow";
            return -1;
        }
        return head->val;

    }

    bool isEmpty(){
        return head==NULL;
    }

    bool isFull()
    {
        return currSize>=size-1;
    }

    int capacity()
    {
        return size;
    }
};

int main()
{
    Stack st(5);
    st.push(5);
    st.push(10);
    st.push(11);
    cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    cout<<st.gettop()<<endl;
    st.push(15);
    st.push(10);
    cout<<st.gettop()<<endl;
    st.push(10);
    st.push(20);
    st.push(20);
    
}