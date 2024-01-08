#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    int ans =0;
    vector<int> v = {1,2,1,2,23,23,3};
    for(auto ele:v)
    {
        m[ele]++;
    }
    for(auto pair:m)
    {
        if(pair.second>1)
            ans+=pair.first;
    }
    cout<<ans<<endl;
}