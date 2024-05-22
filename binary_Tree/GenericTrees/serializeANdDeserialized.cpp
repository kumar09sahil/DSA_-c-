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

void serialized(node*root,string &ans)
{
    if(root==NULL)
    {
        return;
    }

    ans+=to_string(root->val)+':';
    ans+=to_string(root->children.size()) + ':';
    for(node*child : root->children)
    {
        ans+=to_string(child->val)+',';
    }
    ans.pop_back();
    ans+='\n';
    for(node*child :root->children)
    {
        serialized(child,ans);
    }

}

node* deserialize(node*root, string serializedStr)
{
    unordered_map<int,string>mp;
    int start=0;
    for(int i=0;i<serializedStr.size();i++)
    {
        
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
    string serializedStr = "";
    serialized(root,serializedStr);
    for(int i=0;i<serializedStr.size();i++)
    {
        cout<<serializedStr[i];
    }

    node* root = deserialize(root,serializedStr);
    
}