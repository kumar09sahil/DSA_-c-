#include<bits/stdc++.h>
using namespace std;
void multiple (int n, int k)
{
    if(k<1)
        return;
    multiple(n,k-1);
    cout<<n*k<<" ";
}
int main()
{
    multiple(5,100);
    return 0;
}