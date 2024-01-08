#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int ele,n;
    vector <int> v;
    cout<<"enter the numbers of element";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        if(v[i]%2==0 && v[j]%2==0)
        {
            i++;
        }
        else if(v[i]%2==1 && v[j]%2==0)
        {
            swap(&v[i],&v[j]);
            i++;
            j--;
        }
        else if(v[i]%2==1 && v[j]%2==1)
        {
            j--;
        }
        else if(v[i]%2==0 && v[j]%2==1)
        {
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}