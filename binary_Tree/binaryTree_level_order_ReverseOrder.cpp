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

vector<int> reverse_level_order(node*root)
{
    stack<int>st;
    vector<int>ans;
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        node*currNode = Q.front();
        Q.pop();
        st.push(currNode->val);
        if(currNode->right)
        {
            Q.push(currNode->right);
        }
        if(currNode->left)
        {
            Q.push(currNode->left);
        }
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
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

    vector<int>ans =reverse_level_order(root);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
}

//*       2
//*     4   10
//*   6  5    11
//*             13