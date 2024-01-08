#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
void countSort(vector <int> &v)
{
    auto max = max_element(v.begin(),v.end());
    vector <int> count((*max)+1,0);
    vector <int> a(v.size());
    for(int i =0;i<v.size();i++)
    {
        count[v[i]]++;
    }
    for(int i=1; i<count.size();i++)
    {
       count[i] =  count[i]+ count[i-1];
    }
    for(int t=v.size()-1; t>=0;t--)
    {
        a[count[v[t]]-1]= v[t];
        count[v[t]]--;
    }

    for(int i =0 ;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    vector <int> v;
    v = {2,4,1,5,8,3,20,28,23,1,1,2,23,0,0,76,12};
    countSort(v);
    return 0;
}