#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,1,5,3,4,2,4};
    int uniq;
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(a[i]==a[j])
            a[i]=a[j]=-1;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(a[i]>0)
        cout<<"unique number is "<<a[i];
    }
    
    return 0;
}