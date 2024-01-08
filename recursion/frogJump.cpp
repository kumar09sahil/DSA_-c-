//*  in frog jump question we can make the intuition that : the frog can either take 1 or 2 step at a time hence we can assum that frogJump(h,n,idx+1) function 
//* can calculate the value for 1st to nth step or frogJump(h,n,idx+2) + abs(h[idx+2] this can calculate for 2nd to nth step then we can get our value. 


#include<bits/stdc++.h>
using namespace std;
int frogJump (int h[], int n, int idx)
{
    if(idx>=n-1)
    return 0;

    if(idx==n-2)
    return frogJump(h,n,idx+1) + abs(h[idx+1] - h[idx]);

    return min((frogJump(h,n,idx+1) + abs(h[idx+1] - h[idx])) , (frogJump(h,n,idx+2) + abs(h[idx+2] - h[idx]) ));
}
int main()
{
    int h[] = {10,60,30,20};
    int n=4;
    int ans = frogJump(h,n,0);
    cout<<ans;
    return 0;

}