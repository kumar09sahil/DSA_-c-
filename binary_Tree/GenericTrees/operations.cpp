#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    char val;
    vector<node*>children;

    node(char val)
    {
        this->val = val;
    }
};

void preorder(node*root)
{
    if(root==NULL)
    {
        return ;
    }

    cout<<root->val<<" ";
    for(node* child: root->children)
    {
        preorder(child);
    }
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    for(node* child: root->children)
    {
        postorder(child);
    }
    cout<<root->val<<" ";
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    int numberofchilds = root->children.size();
    for(int i=0;i<numberofchilds-1;i++)
    {
        inorder(root->children[i]);
    }
    cout<<root->val<<" ";
    if(numberofchilds)
        inorder(root->children[numberofchilds-1]);
}

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

int main(){
    node* root = new node('A');
    node* node1 =new node('B');
    node* node2 =new node('D');

    root->children.push_back(node1);
    root->children.push_back(new node('C'));
    root->children.push_back(node2);
    root->children.push_back(new node('E'));
    node1->children.push_back(new node('F'));
    node1->children.push_back(new node('G'));
    node1->children.push_back(new node('H'));
    node2->children.push_back(new node('I'));
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    levelOrder(root);


}