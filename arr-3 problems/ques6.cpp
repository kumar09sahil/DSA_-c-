// Q6 - ​Given an array of size ‘n’ (initially zero) and ‘q’ number of updates where in each update
// we can increase the value of all index from index l to index r with value x and in the end
// print all the numbers of the array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    vector <int> v(n,0);
    int q=3,x=5;
    int l,r;
    while(q--)
    {
        cout<<"enter the l and r range ";
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        v[i]+=x;
    }
    for(int j=0;j<n;j++)
    {
        cout<<v[j]<<" ";
    }
    return 0;
}