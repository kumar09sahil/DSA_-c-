#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int* arr;
    int top;

    public:
    Stack(int c)
    {
        size = c;
        arr = new int[c];
        top=-1;
    }

    void push(int x)
    {
        if(top == size-1)
        {
            cout<<"--overflow--";
            return;
        }
        top++;
        arr[top]= x;
    }

    int pop()
    {
        if(top==-1)
        {
            cout<<"--underflow--";
            return -1;
        }
        top--;
    }

    int gettop()
    {
        if(top == size-1)
        {
            cout<<"--overflow--";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top==-1;
    }

    bool isFull()
    {
        return top>=size;
    }

    int capacity()
    {
        return size;
    }
};

int main()
{
    Stack st(5);
    st.push(5);
    st.push(10);
    st.push(11);
    st.pop();
    cout<<st.gettop()<<endl;
    st.push(10);
    st.push(10);
    st.push(10);
    st.push(20);
    st.push(20);
    
}