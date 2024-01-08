#include<bits/stdc++.h>
using namespace std;
int SquareRoot(int x)
{
    int ans = -1;
    int low = 1;
    int high = x;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(mid*mid > x)
        {
            high = mid-1;
        }
        else
        {
            ans = mid;
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    cout<<SquareRoot(100);
    return 0;

}
