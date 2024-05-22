#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node*left;
    node*right;

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> top_view_binaryTree(node*root)
{
    vector<int>ans;
    queue<pair<node*,int>>Q;
    map<int,int>M;
    Q.push(make_pair(root,0));
    while(!Q.empty())
    {
        pair<node*,int> p = Q.front();
        Q.pop();
        node*currNode = p.first;
        int curr_column = p.second;
        if(M.find(curr_column) == M.end())
        {
            ans.push_back(currNode->val);
            M[curr_column]=currNode->val;
        }
        if(currNode->left)
        {
            Q.push(make_pair(currNode->left,curr_column-1));
        }
        if(currNode->right)
        {
            Q.push(make_pair(currNode->right,curr_column+1));
        }
    }
    return ans;
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

    vector<int>ans = top_view_binaryTree(root);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
}

//*       2
//*     4   10
//*   6  5    11
//*             13