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

node* recursiveInsert(node* &root, int val)
{
    node*newnode = new node(val);
    if(root==NULL)
    {
        root=newnode;
        return root;
    }

    if(root->val>val)
    {
        root->left = recursiveInsert(root->left,val);
    }
    else if(root->val < val)
    {
        root->right = recursiveInsert(root->right,val);
    }
    return root;
}

void iterativeInsert(node* &root, int val)
{
    node*newnode = new node(val);
    //* if root is null then make the newnode as the root
    if(root==NULL)
    {
        root=newnode;
        return;
    }
    node* curr = root;
    while(true)
    {
        //* val is less than root->val than move to its left
        if(curr->val>val)
        {
            //* if its left is null then insert the node there
            if(curr->left==NULL)
            {
                curr->left = newnode;
                return;
            }
            curr = curr->left;
        }
        //* val is right than root->val than move to its right
        else if(curr->val < val)
        {
            //* if its right is null then insert the node there
            if(curr->right==NULL){
            curr->right = newnode;
            return;
            }
            curr = curr->right;
        }
    }
}

bool recursiveSearch(node* &root, int value)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->val == value)
    {
        return true;
    }
    if(root->val>value)
    {
        recursiveSearch(root->left,value);
    }
    if(root->val<value)
    {
        recursiveSearch(root->right,value);
    }
}

node* largestBst(node* &root)
{
    node* curr = root;
    if(curr && curr->right)
    {
        curr=curr->right;
    }
    return curr;
}

node* deleteBst(node*&root, int val)
{
    if(root==NULL)
    {
        return root;
    }

    //* if value is less than root->val then search in left subtree
    if(root->val > val)
    {
        root->left = deleteBst(root->left, val);
    }
    //*if value more than root than check in right subtree
    else if(root->val< val)
    {
        root->right = deleteBst(root->right, val);
    }
    //* on finding the root check the case
    else{
        //*if node is a leaf node with no child nodes
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        //* node has only one child either left or right
        else if(root->left == NULL)
        {
            node*temp = root->left;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            node*temp = root->left;
            free(root);
            return temp;
        }
        //* node has both the child then search for the largest element samller than root and replace its value for root and delete the node of largest element samller than root
        else{
            node* justSmallernode = largestBst(root->left);
            root->val = justSmallernode->val;
            root->left = deleteBst(root->left, justSmallernode->val);
        }
    }
    return root;

}

void inorder(node*root)
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
    // iterativeInsert(bst1.root,3);
    // iterativeInsert(bst1.root,1);
    // iterativeInsert(bst1.root,2);
    recursiveInsert(bst1.root,3);
    recursiveInsert(bst1.root,1);
    recursiveInsert(bst1.root,2);
    recursiveInsert(bst1.root,8);
    recursiveInsert(bst1.root,4);
    inorder(bst1.root);
    deleteBst(bst1.root,4);
    cout<<"\n";
    inorder(bst1.root);
    // cout<<recursiveSearch(bst1.root,1);
}