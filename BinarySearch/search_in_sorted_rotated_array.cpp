#include<bits/stdc++.h>
using namespace std;
int search(vector <int> &v, int target)
{
    int low=0;
    int high = v.size()-1;
    while(low<=high)
    {
        int mid =  low + (high - low )/2;
        if(v[mid] == target)
        {
            return mid;
        
        }
        if(v[mid]>= v[low])
        {
            if(target>=v[low] && target < v[mid])
            {
                high= mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else if(v[mid] < v[high])
        {
            if(target > v[mid] && target <= v[high])
            {
                low = mid+1;
            }
            else 
            {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector <int> v = {4,5,6,1,2,3};
    cout<<search(v,51);
    return 0;
}