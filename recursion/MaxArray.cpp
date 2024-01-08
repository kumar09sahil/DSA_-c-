#include<bits/stdc++.h>
using namespace std;
int maxi(int arr[], int idx, int n)
{
    if(idx>=n)
        return -1;
    return max(arr[idx],maxi(arr,idx+1,n));
}
int main()
{
    int a[]= {1,2,352,4,56,6,43};
    int ans = maxi(a,0,7);
    cout<<ans;
    return 0;
}