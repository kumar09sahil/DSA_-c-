#include<bits/stdc++.h>
using namespace std;
int one_peak(vector <int> &v)
{
    int low = 0;
    int high = v.size()-1;
    int ans=-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(mid==0)
        {
            if(v[mid]>v[mid+1])
            return 0;
            else 
            return 1;
        }
        else if(mid==v.size()-1)
        {
            if(v[mid]> v[mid-1])
            return v.size()-1;
            else
            return v.size()-2;
        }
        if(v[mid] >= v[mid-1])
        {
            ans = mid;
            low = mid+1;
        }
        else 
        {
            
            high = mid-1;
        }
    }
    return ans;
}
int main()
{
    vector <int> v = {6,4,6,4,32,4,76};
    cout<<one_peak(v);
    return 0;
}