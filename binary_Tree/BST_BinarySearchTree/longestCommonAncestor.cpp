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

//* intuiton : LCA belongs in between the value of node1 and node2 or (if either of the node is the parent of other than it would be the lca)
node* longestCommonAncestor(node* root, node*node1, node*node2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->val > node1->val && root->val > node2->val)
    {
        // * LCA lies in the left subtree
        return longestCommonAncestor(root->left,node1,node2);
    }
    if(root->val < node1->val && root->val < node2->val)
    {
        //* LCA lies in the right subtree
        return longestCommonAncestor(root->right,node1,node2);
    }
    else{
    return root;}
    //* if root->val is between node1 and node2 ka value
    //* or root->value is equal to node1 or node2 ka value
}

int main()
{
    bst bst1;
    Insert(bst1.root,3);
    Insert(bst1.root,1);
    Insert(bst1.root,2);
    Insert(bst1.root,8);
    Insert(bst1.root,9);
    
    node* node1 = new node(1);
    node* node2 = new node(2);
    cout<<longestCommonAncestor(bst1.root,node1,node2)->val;
    // cout<<recursiveSearch(bst1.root,1);
}