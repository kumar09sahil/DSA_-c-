#include<bits/stdc++.h>
using namespace std;
int find(int a[], int i, int n, int x)
{
    if(i>=n)
    return 0;

    return ( a[i]==x || find(a,i+1,n,x));
}
int main()
{
    int a[] = {1,2,3,4,5,67};
    int ans = find(a,0,6,7);
    if(ans)
    cout<<"present";
    else
    cout<<"not";
    return 0;
}