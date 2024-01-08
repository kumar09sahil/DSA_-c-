#include<bits/stdc++.h>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int data)
    {
        val = data;
        next=NULL;
    }
};

class linkedList{
public:
    ListNode* head;

    void insertAtTail(int val)
    {
        ListNode* new_node = new ListNode(val);
        if(head == NULL)
        {
            head = new_node;
            return;
        }
        else{
            ListNode*temp = head;
            while(temp->next !=NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void display()
    {
        ListNode* temp = head;
        while(temp)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};