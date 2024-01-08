#include<bits/stdc++.h>
using namespace std;

int operations(int v1,int v2, char op)
{
    if(op=='+')
    {
        return v1+v2;
    }
    else if(op=='^')
    {
        return pow(v1,v2);
    }
    else if(op=='*')
    {
        return v1*v2;
    }
    else if(op == '/')
    {
        return v1/v2;
    }
    else if(op == '-')
    {
        return v1-v2;
    }
}

int precedance(char ch)
{
    if(ch == '^') return 3;
    else if(ch == '*' || ch=='/') return 2;
    else if(ch== '+' || ch=='-') return 1;
    else return -1;
}

int evaluate(string s)
{
    stack<int> nums; 
    stack<char> op;
    int v1=0,v2=0;
    for(int i=0;i<s.size();i++)
    {
        char ch =s[i];
        if(isdigit(ch))
        {
            nums.push(ch - '0');
        }
        else if(ch == '(')
        {
            op.push('(');
        }
        else if(ch == ')')
        {
            while(!op.empty() && op.top() !='(')
            {
                char c= op.top();
                op.pop();
                v2=nums.top();
                nums.pop();
                v1 = nums.top();
                nums.pop();
                int val = operations(v1,v2,c);
                nums.push(val);
            }
           if(!op.empty()) op.pop();
        }
        else{
            while(!op.empty() && precedance(ch) <= precedance(op.top()))
            {
                char c= op.top();
                op.pop();
                v2=nums.top();
                nums.pop();
                v1 = nums.top();
                nums.pop();
                int val = operations(v1,v2,c);
                nums.push(val);
            }
            op.push(ch);
        }
    } 
    while(!op.empty())
    {
        char c= op.top();
        op.pop();
        v2=nums.top();
        nums.pop();
        v1 = nums.top();
        nums.pop();
        int val = operations(v1,v2,c);
        nums.push(val);
    }
    return nums.top();
}

int main()
{
    string s = "1+(2*(3-1))+2";
    cout<<evaluate(s);
}