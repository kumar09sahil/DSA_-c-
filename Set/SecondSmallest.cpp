#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int> v)
{
    set<int>S;
    for(auto ele : v)
    {
        S.insert(ele);
    }
    auto itr = S.begin();
    itr++;
    return *itr;
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    cout<<"ans "<<secondSmallest(v);
}
