#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* prev;
    node* next;

    node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class doublyLinkedList{
public:
    node* head;
    node* tail;

    doublyLinkedList(){
        head = NULL;
        tail = NULL;
        
    }

    void insertAtTail(int val)
    {
        node* new_node = new node(val);
        if(tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void display()
    {
        node* temp = head;
        while(temp)
        {
            cout<<temp->val<<"<->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

bool iscritical(node* &temp)
{
    if(temp->val > temp->prev->val && temp->val >temp->next->val)
        return true;
    
    if(temp->val < temp->prev->val && temp->val < temp->next->val)
        return true;
}

vector <int>distance(node* &head, node* &tail)
{
    vector <int>ans(2,INT16_MAX);
    node* curr = tail->prev;
    int lastcp= -1, firstcp= -1;
    if(curr == NULL)
    {
        ans[0]=ans[1]=-1;
        return ans;
    }

    int currpos = 0;
    while(curr!=head)
    {
        if(iscritical(curr))
        {
            if(firstcp == -1)
            {
                firstcp = lastcp = currpos;
            }
            else
            {
                ans[0] = min(ans[0],currpos-firstcp );
                ans[1] = currpos - firstcp;
                lastcp = currpos;
            }
        }
        currpos++;
        curr = curr->prev;
    }
    if(ans[0] == INT16_MAX)
     {
        ans[0] = ans[1] =-1;
     }
        return ans;

}

int main()
{
    doublyLinkedList l1;
    vector <int> ans;
    l1.insertAtTail(1);
    l1.insertAtTail(5);
    l1.insertAtTail(4);
    l1.insertAtTail(2);
    l1.insertAtTail(6);
    l1.insertAtTail(3);
    l1.display();
    ans = distance(l1.head, l1.tail);
    for(int ele : ans)
    {
        cout<<ele<<" ";
    }
   
}