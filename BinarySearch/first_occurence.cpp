#include<bits/stdc++.h>
using namespace std;
int fir_occurence(vector <int> &v, int target)
// * time = o(logn)
// * space = o(1)
{
    int low =0;
    int high = v.size()-1;
    int ans =-1;
    while(low<=high)
    {
        int mid= low+ (high - low)/2;
        if(v[mid] == target)
         {  
              ans = mid;
             high = mid-1;
         }
        else if(v[mid]<target)
            low = mid+1;
        else if (v[mid]> target)
            high = mid-1;
    }
    return ans;
}
int main()
{
    vector <int> v = {2,5,5,5,6,6,9,9,9,9};
    cout<<fir_occurence(v,9);
    return 0;

}