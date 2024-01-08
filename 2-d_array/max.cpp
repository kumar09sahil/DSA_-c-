#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"enter the dimension of 1st matrix";
    cin>>r1>>c1;
    int a[r1][c1];
    int max=a[0][0];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    cout<<"maximum element is "<<max;
    return 0;
}