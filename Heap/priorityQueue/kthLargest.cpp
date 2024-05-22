#include<bits/stdc++.h>
using namespace std;

int kthlargest(vector<int>nums, int k)
{
    priority_queue<int, vector<int>,greater<int>> pq;
    for(int i=0;i<nums.size();i++)
    {
        pq.push(nums[i]);
        if(pq.size()>k)
        {
            pq.pop(); //* removing the n-k th elemnts
        }
    }
    return pq.top();
}

int main()
{
    vector<int> num ;
    int n,numb;
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>numb;
        num.push_back(numb);
    }
    int k;
    cout<<"enter tje k th largest element ";
    cin>>k;
    cout<<" kth largest elemt "<<kthlargest(num,k);
}