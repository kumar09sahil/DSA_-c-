#include<bits/stdc++.h>
using namespace std;
int minimum(vector <int> &v)
{
    int low = 0;
    int high = v.size()-1;
   
    if(v[low] < v[high])
    {
        return low;
    }
    else 
    {
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if( v[mid] < v[mid-1])
                return mid;
            if(v[mid] > v[mid+1])
                return mid+1;
            if(v[mid] > v[low])
                 low = mid+1;
            if(v[mid] < v[low])
                high = mid-1;
        }
    }
}
int main()
{
    vector <int> v = {6,1,2,3};
    cout<<minimum(v);
    return 0;
    
}