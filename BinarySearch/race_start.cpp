#include<bits/stdc++.h>
using namespace std;
bool can_place_stdnt(vector <int> &v,int s,int mid)
{
    int studentrqd = 1;
    int lastpoint= v[0];
    for (int i=0; i<v.size();i++)
    {
        if(v[i]-lastpoint >= mid)
        {
            lastpoint = v[i];
            studentrqd++;
            if(studentrqd == s)
                return true;
        }
    }
    return false;
}
int min_place(vector <int> v,int s)
{
    int n = v.size();
    int low =0;
    int high = v[n-1]-v[0];
    int ans = -1;
    while(low <= high)
    {
        int mid = low +(high - low )/2;
        if(can_place_stdnt(v,s,mid))
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
    vector <int> v = {1,2,4,8,9};
    cout<<min_place(v,3);
    return 0;
}