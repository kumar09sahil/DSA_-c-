#include<bits/stdc++.h>
 using namespace std;
 int OptimisedPower(int n, int p)
 {
    if(p==0)
        return 1;
    else if(p==1)
        return n;
    else{
        if(p%2==0)
        {
            int ans = OptimisedPower(n,p/2);
            return ans*ans;
        }
        else{
            int ans =  OptimisedPower(n,p/2);
            return n*ans*ans;
        }
    }
 }
 int main()
 {
    int ans = OptimisedPower(53,5);
    cout<<ans;
    return 0;
 }