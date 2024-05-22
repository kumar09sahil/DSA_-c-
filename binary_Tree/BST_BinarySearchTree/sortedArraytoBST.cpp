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

node* sortedArraytoBST(vector<int>&v,int start,int end)
{
    //* base case when the entire array is traversed
    if(start>end)
    {
        return NULL;
    }

    //* intuition : to make a balanced tree we have to search for the middle element every time and make it the root from the sorted array
    int mid = (start+end)/2;
    node* root = new node(v[mid]);
    root->left = sortedArraytoBST(v,start,mid-1);
    root->right = sortedArraytoBST(v,mid+1,end);
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
    vector<int>v ={1,2,3,4,5,6,7,8};
    node* root = sortedArraytoBST(v,0,v.size()-1);
    inorder(root);
}

