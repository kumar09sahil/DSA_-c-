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

void InorderPredessorSuccesor(node*root, node*key,node* &pred, node* &succ)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->val == key->val)
    {
        if(root->left)
        {
            node* temp = root->left;
            if(temp->right)
            {
                temp=temp->right;
            }
            pred= temp;
        }

        if(root->right)
        {
            node*temp = root->right;
            if(temp->left)
            {
                temp = temp->left;
            }
            succ = temp;
        }
        return;
    }
    if(root->val > key->val)
    {
        succ = root;
        InorderPredessorSuccesor(root->left,key,pred,succ);
    }
    if(root->val < key->val)
    {
        pred = root;
        InorderPredessorSuccesor(root->right,key,pred,succ);
    }
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
    node* key = new node(3);
    node*pred= NULL;
    node*succ= NULL;
    InorderPredessorSuccesor(bst1.root,key,pred,succ);
      if(pred != NULL)
        cout << pred->val << " ";
    else
        cout << "NULL ";
    if(succ != NULL)
        cout << succ->val;
    else
        cout << "NULL";

} 