#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the size ";
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
            cin>>a[i][j];
       }
       
    }

       for (int j = 0; j < n; j++)
       {
                sum=sum+ *(*(a+j)+j);
       }

    cout<<"sum of the diagonal is "<<sum;
    return 0;
    
}