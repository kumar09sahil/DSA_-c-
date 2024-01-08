#include<bits/stdc++.h>
using namespace std;
void prefix_sum(vector <int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        v[i]=v[i]+v[i-1];  // this is for running sum in_place;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector <int> v;
    int ele,n;
    cout<<"enter the number of element";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    } 
    prefix_sum(v);
    return 0;
}