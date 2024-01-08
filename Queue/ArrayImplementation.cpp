#include<bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int front;
    int back;
    vector<int> v;
    int size;
     
    Queue(int c)
    {
        front =-1;
        back =-1;
        size = c;
    }

    void enque(int val)
    {
        if(back == size)
        {
            cout<<"overflow";
            return;
        }
        v.push_back(val);
        back++;

        if(back == 0) front =0;

    }

    void deque()
    {
        if(front > back)
        {
            cout<<"--underflow--"<<endl;
            return;
        }
        front++;
    }

    bool isempty()
    {
        return front>back;
    }
    bool isfull()
    {
        return back == size;
    }

    int getfront()
    {
        if(front > back)
        {
            cout<<"--underflow--"<<endl;
            return -1;
        }
        return v[front];
    }

    int length()
    {
        return size;
    }

    void display()
    {
        for(int i=front ;i<=back;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue Q(5);
    Q.enque(5);
    Q.enque(6);
    Q.enque(8);
    Q.enque(9);
    Q.enque(9);
    // Q.enque(9);
    Q.display();
    Q.deque();
    Q.deque();
    cout<<Q.isempty()<<endl;
    cout<<Q.isfull()<<endl;
    cout<<Q.getfront()<<endl;
    cout<<Q.length()<<endl;
    Q.display();
}