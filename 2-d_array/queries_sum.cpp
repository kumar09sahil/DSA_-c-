#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the dimension of the matrix";
    cin>>n>>m;
    vector <vector <int> > matrix(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    int val=0;
    cout<<"enter the queries ";
    cin>>l1>>r1>>l2>>r2;
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            val+=matrix[i][j];
        }
    }

    cout<<"sum is "<<val;
    return 0;
    
}