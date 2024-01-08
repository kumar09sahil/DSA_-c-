#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={5,3,6,1,8};
    int *ptr;
    ptr = &a[4];
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<" ";
        if(ptr==a)
            break;
        ptr--;
    }
    cout<<"\n";
    for (int i = 4; i >=0 ; i--)
    {
        cout<<*(a+i)<<" ";
    }
    
    return 0;
}