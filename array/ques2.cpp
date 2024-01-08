#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elemnrts";
    cin>>n;
    int arr[n];
    for(int &ele:arr)
    {
        cin>>ele;
    } 
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"maximum number is "<<max;
    return 0;
    
}