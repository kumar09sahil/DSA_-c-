#include<bits/stdc++.h>
using namespace std;

vector<int> MaximumSlidingWindow(vector<int> nums,int k)
{
    deque<int> dq;
    vector<int> ans;
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && nums[dq.back()]< nums[i])
            dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    for(int i=k;i<nums.size();i++)
    {
        if(dq.front() == i-k)
            dq.pop_front();
        while(!dq.empty() && nums[dq.back()]< nums[i])
            dq.pop_back();
        dq.push_back(i);
        ans.push_back(nums[dq.front()]);
    }
    return ans;
}

int main()
{
    vector<int>nums = {7,2,4};
    vector<int>ans;
    ans = MaximumSlidingWindow(nums,2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}