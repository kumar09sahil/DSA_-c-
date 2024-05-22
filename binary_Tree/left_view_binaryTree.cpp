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

vector<int> left_view_tree(node* root)
{
    vector<int>ans;
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        int nodesAtCurrentPos=Q.size();
        while(nodesAtCurrentPos)
        {
            node* currNode = Q.front();
            Q.pop();
            if(nodesAtCurrentPos==1){
                ans.push_back(currNode->val);
            }
            if(currNode->right)
            {
                Q.push(currNode->right);
            }
            if(currNode->left)
            {
                Q.push(currNode->left);
            }
            nodesAtCurrentPos--;
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

    vector<int>ans = left_view_tree(root);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
}

//*       2
//*     4   10
//*   6  5    11
//*             13