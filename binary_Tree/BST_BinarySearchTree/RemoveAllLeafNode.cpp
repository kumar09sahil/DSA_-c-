#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node*left;
    node*right;

    node(int data)
    {
        val=data;
        left=NULL;
        right=NULL;
    }
};

class bst{
    public:
    node* root;
    bst(){
        root=NULL;
    }
};

node* Insert(node* &root, int val)
{
    node*newnode = new node(val);
    if(root==NULL)
    {
        root=newnode;
        return root;
    }

    if(root->val>val)
    {
        root->left = Insert(root->left,val);
    }
    else if(root->val < val)
    {
        root->right = Insert(root->right,val);
    }
    return root;
}

node* removeLeafnodes(node*root)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right == NULL)
    {
        return NULL;
    }
    root->left = removeLeafnodes(root->left);
    root->right = removeLeafnodes(root->right);
    return root;
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main()
{
    bst bst1;
    Insert(bst1.root,3);
    Insert(bst1.root,1);
    Insert(bst1.root,2);
    Insert(bst1.root,8);
    Insert(bst1.root,9);
    inorder(bst1.root);
    cout<<"\n";
    removeLeafnodes(bst1.root);
    inorder(bst1.root);

    // cout<<recursiveSearch(bst1.root,1);
}