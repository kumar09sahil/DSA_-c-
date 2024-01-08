#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> Q;
    Q.push(2);
    Q.push(21);
    Q.push(29);
    Q.push(42);
    Q.push(32);
    Q.push(20);
    
    stack<int> st;

    while(!Q.empty())
    {
        st.push(Q.front());
        Q.pop();
    }
    while(!st.empty())
    {
        Q.push(st.top());
        st.pop();
    }

    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
}