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
    int value;
    int l1,r1,l2,r2;
    cout<<"enter the queries ";
    cin>>l1>>r1>>l2>>r2;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            matrix[i][j]+=matrix[i-1][j];
        }
    }
    if(l1!=0 && r1!=0)
    {
         value=matrix[l2][r2]-matrix[l1-1][r2]-matrix[l2][r1-1]+matrix[l1-1][r1-1];
    }
    else if(l1==0 && r1==0)
    {
        value=matrix[l2][r2];
    }
    else if(r1==0)
    {
         value=matrix[l2][r2]-matrix[l1-1][r2];
    }
    else if(l1==0)
    {
         value=matrix[l2][r2]-matrix[l2][r1-1];    
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum is "<<value<<endl;
    return 0;
}