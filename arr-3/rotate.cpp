#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,7,8,9,10};
    int newa[9];
    int n=9;
    int k=11;
    k=k%n;
    int j=0;
    for(int i=n-k;i<n;i++)
    {
        newa[j++]=a[i];
    }
    for(int i=0;i<n-k;i++)
    {
        newa[j++]=a[i];
    }
    for(int ele:newa)
    {
        cout<<ele<<" ";
    }
    return 0;

}