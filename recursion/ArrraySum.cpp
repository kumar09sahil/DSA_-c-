#include<bits/stdc++.h>
using namespace std;
int ArraySum(int arr[], int idx, int n)
{
    if(idx>=n)
        return 0;
    return arr[idx]+ ArraySum(arr,idx+1,n);
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int ans = ArraySum(a,0,9);
    cout<<ans;
    return 0;
}