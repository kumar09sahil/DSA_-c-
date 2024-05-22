#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    vector<node*>children;

    node(int val)
    {
        this->val = val;
    }
};

void levelOrder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int nodesAtcurrentLevel = q.size();
        while(nodesAtcurrentLevel--)
        {
            node* currNode = q.front();
            q.pop();
            cout<<currNode->val<<" ";
            for(node* child : currNode->children)
            {
                q.push(child);
            }
        }
        cout<<endl;
    }
}

void justlarger(node*root, int x, node* &ans)
{
    if(root==NULL)
    {
        return;
    }
    if(ans==NULL || (root->val > x && root->val < ans->val))
    {
        ans = root;
    }
    for(node* child : root->children)
    {
        justlarger(child,x,ans);
    }
}

int main(){
    node* root = new node(20);
    node* node1 =new node(25);
    node* node2 =new node(11);

    root->children.push_back(node1);
    root->children.push_back(new node(10));
    root->children.push_back(node2);
    root->children.push_back(new node(43));
    node1->children.push_back(new node(4));
    node1->children.push_back(new node(3));
    node1->children.push_back(new node(5));
    node2->children.push_back(new node(12));
    levelOrder(root);
    cout<<endl;
    node* ans = NULL;
    justlarger(root,12,ans);
    if(root==NULL)
    {
        cout<<"NULL";
    }
    cout<<" ANS - "<<ans->val;
}
