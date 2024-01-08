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

node* group_odd_even(node* &head)
{
    if(!head->next->next)
    {
        return head;
    }

    node* even_head = head->next;
    node* oddp = head;
    node* evenp = even_head;
    while(oddp && oddp->next)
    {
        oddp->next = oddp->next->next;
        evenp->next = evenp->next->next;
        oddp= oddp->next;
        evenp= evenp->next;
    }
    oddp->next = even_head;
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
    l1.head=group_odd_even(l1.head);
    l1.display();
}