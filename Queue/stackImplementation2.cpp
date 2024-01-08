#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>st;
    public:

    //*T = O(n) 
    //*S = O(n) 
    void push(int val)
    {
        stack<int>temp;
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(val);
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
    void pop()
    {
        if(st.empty())
            return;
        st.pop();
    }
    int front()
    {
         if(st.empty())
            return -1;
        return st.top();
    }

    bool empty()
    {
        return st.empty();
    }
};

int main()
{
    Queue Q;
    Q.push(5);
    Q.push(15);
    Q.push(58);
    Q.push(567);
    Q.push(757);
    Q.push(575);
    Q.pop();
    Q.pop();
    Q.pop();
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
}