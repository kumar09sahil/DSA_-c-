// Q1 - Given an integer array and two integers L and R. Find the sum of elements between the
// index L and index R.
// Note: Both L and R inclusive.

// Input:[1,2,3,4,5] L=1 R=3
// Output:9
// Explanation:2+3+4=9
// Input:[1,2,3,4,5] L=2 R=2
// Output:3
// Explanation:3




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ele;
    vector <int> v;
    cout<<"enter the number of elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    cout<<"enter the range l and r";
    int l , r;
    cin>>l>>r;
    int sum;
    sum=v[r]-v[l-1];
    cout<<"sum in the range is "<<sum;
    return 0;
}