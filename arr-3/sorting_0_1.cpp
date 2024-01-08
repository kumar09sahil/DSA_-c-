#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={0,0,1,1,0,1,0,1,0,1,1};
    int size=11,count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
    }
    for(int j=0;j<size;j++)
    {
        if(j<count)
        a[j]=0;
        else
        a[j]=1;
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}