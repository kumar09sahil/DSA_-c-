// s = 1-2+3-4+5-6+7..............
#include<bits/stdc++.h>
using namespace std;
int sumis(int n)
{
    if(n==1)
        return 1;
    return sumis(n-1) + (n%2==0?-n:+n) ;
}
int main()
{
    int ans = sumis(7);
    cout<<ans;
    return 0;
}