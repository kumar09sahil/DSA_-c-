#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<" ";
    }

}
int main()
{
    // int arr[]={-8,-6,-5,0,1,2,3,4};
    int arr[]={-5,-4,-3,-2,-1};
    int f=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            f=1;
        }
        arr[i]=arr[i]*arr[i];
    }
    if(f==1)
    {
        sort(arr,size);
    }
    else
    {

        for(int ele:arr)
        {
            cout<<ele<<" ";
        }

    }
    return 0;
}