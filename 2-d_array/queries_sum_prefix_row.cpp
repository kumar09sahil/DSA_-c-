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
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            matrix[i][j]+=matrix[i][j-1];
        }
    }
    int value;
    if(r1!=0)
    {
        value=(matrix[l1][r2]-matrix[l1][r1-1])+(matrix[l2][r2]-matrix[l2][r1-1]);
    }
    else
    {
         value=matrix[l1][r2]+matrix[l2][r2];
    }
    cout<<"total sum is "<<value;
    return 0;

}