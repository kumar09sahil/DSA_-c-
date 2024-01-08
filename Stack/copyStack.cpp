#include<bits/stdc++.h>
using namespace std;

stack<int> copystack(stack<int> &input)
{
    stack<int> temp;
    while(!input.empty())
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> ans;
    while(!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        ans.push(curr);
    }
    return ans;
}

void recursiveCopyStack(stack<int> &input, stack<int> &res)
{
    if(input.empty()) return ;
    int curr = input.top();
    input.pop();
    recursiveCopyStack(input,res);
    res.push(curr);
}

int main()
{
    stack<int> input;
    stack <int>ans ;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    // stack <int>ans = copystack(input);
    recursiveCopyStack(input,ans);
    while(!ans.empty())
    {
        int curr = ans.top();
        ans.pop();
        cout<<curr<<endl;
    }

}