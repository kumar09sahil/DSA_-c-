#include<bits/stdc++.h>
using namespace std;
void sortedSquare(vector<int> &v)
{
    vector <int> ans;
    int i,j;
    i=0;
    j=v.size()-1;
    while(i<j)
    {
        if(abs(v[i])>abs(v[j]))
        {
            ans.push_back(v[i]*v[i]);
            i++;
        }
        else if(abs(v[i])<abs(v[j]))
        {
            ans.push_back(v[j]*v[j]);
            j--;
        }
        if(i==j)
        {
            ans.push_back(v[i]*v[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<=ans.size()-1;i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int ele,n;
    vector <int> v;
    cout<<"enter the number of element";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    sortedSquare(v);
    return 0;
}