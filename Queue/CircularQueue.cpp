#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
public:
    int front;
    int back;
    int ts;
    int cs;
    vector<int> v;

    CircularQueue(int n)
    {
        v.resize(n);
        front = 0;
        back = n - 1;
        ts = n;
        cs = 0;
    }

    void push(int val)
    {
        if (isfull())
        {
            cout << "--overfow--" << endl;
            return;
        }
        back = (back + 1) % ts;
        v[back] = val;
        cs++;
    }

    void pop()
    {
        if (isempty())
        {
            cout << "--underflow--" << endl;
            return;
        }
        front = (front + 1) % ts;
        cs--;
    }

    int getfront()
    {
        return v[front];
    }
    bool isempty()
    {
        return cs == 0;
    }

    bool isfull()
    {
        return cs == ts;
    }
};

int main()
{
    CircularQueue cq(5);
    cq.push(4);
    cq.push(14);
    cq.push(44);
    cq.push(42);
    cq.push(34);
    cq.pop();
    cq.pop();
    cq.pop();
    cq.push(44);
    cq.push(42);
    cq.push(34);
    cq.push(314);
    cq.push(349);
    while (!cq.isempty())
    {
        cout << cq.getfront() << " ";
        cq.pop();
    }
}
