#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"enter the number of elemnrts";
    cin>>n;
    int arr[n];
    for(int &ele:arr)
    {
        cin>>ele;
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"sum = "<<sum;
    return 0;

}
