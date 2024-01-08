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

int evaluate(string s)
{
    stack<int> st;
    int v1=0, v2=0;
    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];
        if(isdigit(ch))
        {
            st.push(ch -'0');
        }
        else{
            v2=st.top();
            st.pop();
            v1 = st.top();
            st.pop();
            int val = operations(v1,v2,ch);
            st.push(val);
        }
    }
        return st.top();
}

int main()
{
    string s = "231*+9-";
    cout<<evaluate(s);
}