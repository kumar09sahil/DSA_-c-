#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int*y)
{
    int t=*x;
     *x= *y;
     *y= t;
}
int main()
{
    int x=10;
    int y=20;
    cout<<"initial value"<<x<<" "<<y<<'\n';

     swap(&x,&y);
    cout<<"swapped values"<<x<<" "<<y;
    return 0;
}