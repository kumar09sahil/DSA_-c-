#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"enter the dimension of 1st matrix";
    cin>>r1>>c1;
    int a[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the dimension of 2nd matrix";
    cin>>r2>>c2;
    int b[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

    int ans[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            int val=0;
            for(int k=0;k<c1;k++)
            {
                val+=a[i][k]*b[k][j];
                ans[i][j]==val;
            }
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}