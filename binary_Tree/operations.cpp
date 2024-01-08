#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }

};

int maxDepth(Node* root)
{
    if(root == NULL) return 0;

    int left_subtreeDepth = maxDepth(root->left);
    int right_subtreeDepth = maxDepth(root->right);
    
    return (max(left_subtreeDepth , right_subtreeDepth) + 1) ;
}

int leafnodes(Node* root)
{
    //*base case
    if(root==NULL) 
        return 0;

    //* if root is a leafnode itself
    if(root->left==NULL && root->right == NULL) 
        return 1;

    //* recursive call
    int left_subtreeLeafNodes = leafnodes(root->left);
    int right_subtreeLeafNodes = leafnodes(root->right);

    return left_subtreeLeafNodes + right_subtreeLeafNodes;
}

void preorder(Node* rootnode)
{
    if(rootnode==NULL)
        return;
    
    cout<<rootnode->value<<" ";
    preorder(rootnode->left);
    preorder(rootnode->right);
}

void inorder(Node* rootnode)
{
    if(rootnode == NULL)
        return;

    inorder(rootnode->left);
    cout<<rootnode->value<<" ";
    inorder(rootnode->right);
}

void postorder(Node* rootnode)
{
    if(rootnode== NULL)
        return;

    postorder(rootnode->left);
    postorder(rootnode->right);
    cout<<rootnode->value<<" ";
}

void levelOrder(Node* rootnode)
{
    queue<Node*>Q;
    Q.push(rootnode);
    while(!Q.empty())
    {
        int nodeAtCurrentLevel = Q.size();
        while(nodeAtCurrentLevel--)
        {
            Node* curr_node = Q.front();
            cout<<curr_node->value<<" ";
            Q.pop();

            if(curr_node->left)
                Q.push(curr_node->left);
            
            if(curr_node->right)
                Q.push(curr_node->right);
        }
        cout<<endl;
    }
}

int main()
{
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    root->right->right->right = new Node(13);
    cout<<"preorder : ";
    preorder(root);
    cout<<"\ninorder : ";
    inorder(root);
    cout<<"\npostorder : ";
    postorder(root);
    cout<<"\nlevel order : \n";
    levelOrder(root);

    cout<<"max depth : "<<maxDepth(root);
    cout<<"\nnumber of leaf node : "<<leafnodes(root)<<endl;
    // cout<<" root : "<<root->value<<endl;
    // cout<<" root->left : "<<root->left->value<<endl;
    // cout<<" root->right : "<<root->right->value<<endl;

}

//*       2
//*     4   10
//*   6  5    11
//*             13
