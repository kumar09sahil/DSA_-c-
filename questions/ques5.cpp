#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"original"<< a << b<<endl;
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"swapped "<< a << b;
    return 0;
}