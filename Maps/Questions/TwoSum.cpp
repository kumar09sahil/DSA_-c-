#include<bits/stdc++.h>
using namespace std;

//* T = O(N) 
vector<int> TwoSum(vector<int> v, int target)
{
    unordered_map<int,int>record;
    vector<int> ans;
    for(int i=0;i<v.size();i++)
    {
        if(record.find(target-v[i]) == record.end())
        {
            record[v[i]] = i; 
        }
        else{
            ans.push_back(record[target-v[i]]);
            ans.push_back(i);
             return ans;
        }
    }
     return ans;
}

int main()
{
    vector<int>v ={1,4,5,11,13,10,2};
    vector<int>ans = TwoSum(v,43);
    if(ans.empty())
        cout<<"sum not found";
    for(int ele:ans)
    {
        cout<<ele<<" ";
    }
}