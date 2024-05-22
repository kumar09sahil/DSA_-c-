#include<bits/stdc++.h>
using namespace std;

void kthNearest(vector<pair<int,int>>pts, int k)
{
    priority_queue<pair<int,pair<int,int>>>pq;
    for(auto &it : pts)
    {
        pq.push(make_pair((it.first+it.second),it));
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    vector<pair<int,int>>ans(k);
    while(!pq.empty())
    {
        ans[pq.size()-1] = pq.top().second;
        pq.pop();
    }
    for(auto& it : ans)
    {
        cout<<it.first<< " "<<it.second<<"\n";
    }

}

int main()
{
    int n;
    cout<<"enter the size of the points aray ";
    cin>>n;
    vector<pair<int,int>>pts(n);
    for(auto &it :pts)
    {
        cin>>it.first>>it.second;
    }
    int k;
    cout<<"enter the kth value ";
    cin>>k;
    kthNearest(pts,k);

}