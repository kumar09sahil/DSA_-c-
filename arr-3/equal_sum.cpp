#include<bits/stdc++.h>
using namespace std;
void equal_sum(vector <int> &v,int tot_sum)
{
    int f=0;
    for(int i=1;i<v.size();i++)
    {
        v[i]=v[i]+v[i-1];
        int suff_sum=tot_sum-v[i];
        if(v[i]==suff_sum)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    cout<<"yes ";
    else
    cout<<" no ";
}
int main()
{
    vector <int> v;
    int tot_sum=0;
    int ele,n;
    cout<<"enter the number of element";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    } 
    for(int i=0;i<n;i++)
    {
        tot_sum+=v[i];
    }
    
    equal_sum(v,tot_sum);
    return 0;
}