#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,f=0;
    cout<<"enter the number of elemnrts";
    cin>>n;
    int arr[n];
    for(int &ele:arr)
    {
        cin>>ele;
    } 
    cout<<"enter the number to search";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
        cout<<"number is found at "<<i;
        f=1;
        break;
        }
    }
    if(f==0)
    cout<<"number not found ";
    return 0;
}