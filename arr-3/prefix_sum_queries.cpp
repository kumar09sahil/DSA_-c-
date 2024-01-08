#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ele,n;
    cout<<"enter the number of element";
    cin>>n;
    vector <int> v(n+1,0);
    for(int i=1;i<n+1;i++)
    {
        cin>>ele;
        v[i]=ele;
    }
    for(int i=1;i<n+1;i++)
    {
        v[i]=v[i]+v[i-1];
    }
    for(int num:v)
    {
        cout<<num<<" ";
    }
    int q,l,r,sum;
    cout<<"enter the number od queries";
    cin>>q;
    while(q--)
    {
        cout<<"enter the range l and r";
        cin>>l>>r;
        sum=v[r]-v[l-1];
        cout<<"sum in the range is "<<sum;
    }
    return 0;
}