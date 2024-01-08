#include<bits/stdc++.h>
using namespace std;

int longestsubarraySumZero(vector<int> v)
{
    for(int i=1;i<v.size();i++)
    {
        v[i]+=v[i-1]; 
    }
    int ans=0;

    unordered_map<int, int>record;

    for(int i=0;i<v.size();i++)
    {
        if(record.find(v[i]) == record.end())
        {
            record[v[i]] = i;
        }
        else{
            ans = max(ans, i - record[v[i]] );
        }
    }
    return ans;
}

int main()
{
    // vector<int> v ={15,-2,2,-8,1,7,10,23};
    vector<int> v ={0,0,0,0,0,0,0,0};
    cout<<longestsubarraySumZero(v);
}