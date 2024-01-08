#include<bits/stdc++.h>
using namespace std;
int peak_element(vector <int> &v)
{
    int low =0;
    int high = v.size()-1;
    int ans=-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(v[mid-1]<v[mid])
        {
            ans = max(ans,mid);
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
    vector <int> v = {1,2,3,4,5,6,2,3,0};
    cout<<peak_element(v);
    return 0;
}