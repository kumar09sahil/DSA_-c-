#include<bits/stdc++.h>
using namespace std;

vector<int> maxElementInWindow(vector<int> nums,int k)
{
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<nums.size()-k+1;i++)
    {
        int count =0;
        
        for(int j=i; j<nums.size(),count<k;j++,count++)
        {
            if(dq.empty())
            {
                dq.push_back(j);
            }
            else if(nums[j]<=dq.back())
            {
                dq.push_back(j);
            }
            else
            {
                while(!dq.empty() && dq.back()<nums[j])
                {
                    dq.pop_back();
                }
                dq.push_back(j);
            }
        }
        ans.push_back(nums[dq.front()]);
        if(dq.size()==3)
            dq.pop_front();
    }
    return ans;
}

int main()
{
    vector<int>nums = {1,-1};
    vector<int>ans;
    ans = maxElementInWindow(nums,1);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}