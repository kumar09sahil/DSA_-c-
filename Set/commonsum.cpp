#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>s1;
    int ans = 0;
    vector<int> v1 = {1,2,2,2,3,3,3,4,5};
    vector<int>v2 = {5,6,2,3,5,6,7};
    for(auto ele:v1)
    {
        s.insert(ele);
    }
    for(auto ele:v2)
    {
        s1.insert(ele);
    }

    for(auto ele : s1)
    {
        if(s.find(ele) != s.end())
        {
            ans+=ele;
        }
    }
    cout<<ans;
}