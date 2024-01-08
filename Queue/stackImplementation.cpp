#include<bits/stdc++.h>
using namespace std;
class Queue{
stack<int> st;
public:
    void push(int val)
    {
        st.push(val);
    }

    //* T = O(n)
    //* S = O(n)
    void pop()
    {
        stack<int> temp;
        if(st.empty()) return;
        while(st.size()>1)
        {
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }

    }

    bool empty()
    {
        return st.empty();
    }

    //* T = O(n)
    //* S = O(n) 
    int front(){
         stack<int> temp;
          if(st.empty()) return-1;
        while(st.size()>1)
        {
            temp.push(st.top());
            st.pop();
        }
        int res = st.top();
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return res;
    }
};

int main()
{
    Queue Q;
    Q.push(5);
    Q.push(15);
    Q.push(58);
    Q.push(57);
    Q.pop();
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
}