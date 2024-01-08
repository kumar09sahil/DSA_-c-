#include<bits/stdc++.h>
using namespace std;

stack<int> insertAtBottom(stack<int> &input, int val)
{
    stack<int> temp;
    while(!input.empty())
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    input.push(val);
    while(!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
    return input;
}

stack<int> insertAtAnyPos(stack<int> &input, int val, int idx)
{
    stack<int> temp;
    int n= input.size();
    int count = 0;
    while(count< n-idx)
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
        count++;
    }
    input.push(val);
    while(!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
    return input;
}

void recursive(stack<int> &st,int x)
{
    if(st.empty()){
            st.push(x);
            return;
        }
    int curr = st.top();
    st.pop();
    recursive(st,x);
    st.push(curr);
    
}

int main()
{
    stack<int> input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    stack <int>ans = insertAtAnyPos(input,45,2);
    // recursive(input,100);
    while(!ans.empty())
    {
        int curr = ans.top();
        ans.pop();
        cout<<curr<<endl;
    }

}