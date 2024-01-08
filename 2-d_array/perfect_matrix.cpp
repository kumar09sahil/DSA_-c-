#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    int f=0;
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
    for(int i=1;i<r1;i++)
    {
        for(int j=1;j<c1;j++)
        {
            if(a[i][j]==a[i-1][j-1])
            {
                f=1;
            }
        }
    }
    if(f==0)
    {
        cout<<"perfect matrix";
    }
    else{
        cout<<"not perfect";
    }
    return 0;
}