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

void sum(node* &head1, node* &head2,int n, int m)
{
    node* t1 = head1;
    node* t2 = head2;
    int carry = 0;

    //* if first linkedlist empty 
    if(head1 == NULL)
    {
        while(t2 != NULL)
        {
            node*temp = head1;
            node* new_node = new node(t2->val);
            if(head1 == NULL)
            {
                head1 = new_node;
            }
            else
            {
                while(temp->next!=NULL)
                {
                    temp = temp->next;
                }
                temp->next = new_node;
            }
            t2 = t2->next;
        }
        return;
    }

    //* if second linkedlist empty
    if(head2 == NULL)
    {
        return;
    }

    //*size of linkedlist1 > linkedlist2
    if(n>=m)
    {
        while(t2!=NULL)
        {
            int s = t1->val + t2->val + carry;
            t1->val = s%10;
            carry = s/10; //*to store the carry
            t1 = t1->next;
            t2 = t2->next;
        }
    }
    else if(m>n)
    {
        while(t1->next!=NULL)
        {
            int s = t1->val + t2->val + carry;
            t1->val = s%10;
            carry = s/10;   //*to store the carry
            t1 = t1->next;
            t2 = t2->next; 
        }
        t1->val = (t1->val + t2->val+carry)%10;
        carry = (t1->val + t2->val+carry) / 10;
        t2 = t2->next;
        while(t2!=NULL)
        {
            int s= t2->val+carry;
            int d = s%10;
            carry = s/10;
            node* new_node = new node(d);
            t1->next = new_node;
            t1 = new_node;
            t2 = t2->next;
        }
    }
    if(carry == 1)
    {
        node*temp = head1;
        while(temp->next!=NULL)
            temp = temp->next;
        node* new_node = new node(1);
        temp->next = new_node;

    }

}

int main()
{
    linkedlist l1;
    linkedlist l2;
    int n, m, d1,d2;
    cout<<"--enter the size of first linkedlist--- ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"-- please enter the digit: ";
        cin>>d1;
        l1.insertathead(d1);
    }
    cout<<"--enter the size of second linkedlist--- ";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cout<<"-- please enter the digit : ";
        cin>>d2;
        l2.insertathead(d2);
    }
    l1.display();
    l2.display();
    sum(l1.head,l2.head,n,m);
    l1.display();
}