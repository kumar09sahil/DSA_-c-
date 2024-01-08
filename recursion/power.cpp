#include<bits/stdc++.h>
using namespace std;
int power(int n, int p)
{
    if(p==0)
        return 1;
    else if(p==1)
        return n;
    return n* power(n,p-1);
}
int main(){
    int ans = power(9,7);
    cout<<ans;
    return 0;
}