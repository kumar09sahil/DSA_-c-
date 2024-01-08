#include<bits/stdc++.h>
using namespace std;
int SUM(int n, int m)
{
    if(n==0)
        return 0;
    if(n>0 && m == 1)
        return n+SUM(n-1,m);
    else 
        return SUM(SUM(n,m-1),m-1);
}
int main()
{
    int ans = SUM(4,1);
    cout<<ans<<" ";
    return 0;
}