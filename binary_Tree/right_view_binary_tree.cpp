#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node*left;
    node*right;

    node(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

vector<int> rightViewBinaryTree(node*root)
{
    vector<int>v;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int nodeAtCurrentLevel = q.size();
        while(nodeAtCurrentLevel)
        {
            node* curr_node=q.front();
            q.pop();

            if(nodeAtCurrentLevel==1)
                v.push_back(curr_node->value);


            if(curr_node->left)
                q.push(curr_node->left);
            
            if(curr_node->right)
                q.push(curr_node->right);

            nodeAtCurrentLevel--;
        }
    }
    return v;
}

int main()
{
    node* root = new node(2);
    root->left = new node(4);
    root->right = new node(10);
    root->left->left = new node(6);
    root->left->right = new node(5);
    root->right->right = new node(11);
    root->right->right->right = new node(13);

    vector<int>ans = rightViewBinaryTree(root);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
}

//*       2
//*     4   10
//*   6  5    11
//*             13