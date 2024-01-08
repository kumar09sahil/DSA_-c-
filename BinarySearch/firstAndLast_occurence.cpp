#include<bits/stdc++.h>
using namespace std;
void first_occurence(vector <int> &v,int target,vector <int> &sol)
{
    int low =0;
    int high = v.size()-1;
    int mid,ans=-1;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(v[mid]>= target)
        {
            high = mid-1;
            if(v[mid] == target)
            {
                ans = mid;
            }
        }
        else
        {
            low = mid+1;
        }
    }
    sol.push_back(ans);
}

void last_occurence(vector <int> &v, int target, vector <int> &sol)
{
    int low = 0;
    int high = v.size()-1;
    int mid,an=-1;;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(v[mid]<=target)
        {
            low = mid+1;
            if(v[mid] == target)
                an = mid;
        }
        else 
        {
            high = mid-1;
        }
    }
    sol.push_back(an);
}

int main()
{
    vector <int> v = {1,2,3,3,3,3,4,5,5,5,6,6,7};
    vector <int> ans;
    first_occurence(v,8,ans);
    last_occurence(v,8,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}