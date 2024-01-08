#include<bits/stdc++.h>
using namespace std;
bool can_distribute(vector <int> &v,int mid, int s)
{
    int n= v.size();
    int stdrequired = 1;
    int curentsum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>mid)
            return false;
        if(curentsum + v[i] >mid)
        {
            stdrequired++;
            curentsum = v[i];
            if(stdrequired > s)
                return false;
        }
        else 
        {
            curentsum+=v[i];
        }
    }
    return true;
}
int min_distribution(vector <int> &v,int s)
{
    int n = v.size();
    int low = v[0];
    int high = 0;
    int ans=-1;
    for (int i=0;i<n;i++)
    {
        high+= v[i];
    }
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(can_distribute(v,mid,s))
        {
            ans = mid;
            high = mid-1;
        }
        else 
        {
            low= mid+1;
        }
    }
    return ans;
}
int main()
{
    vector <int> v = {12,34,67,90};
    cout<<min_distribution(v,2);
    return 0;
}