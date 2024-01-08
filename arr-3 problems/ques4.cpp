// Q4 - ​Given an integer array arr, return the number of consecutive sequences(subarrays) with
// odd sum.
// Input:[1,3,5]
// Output:4
// Explanation:These sequences are [1],[3],[5] and [1,3,5]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[]={1,3,5};
    int a[]={0,2,4};
    int size=sizeof(a)/sizeof(a[1]);
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==1)
        {
            count++;
        }
    }
    for(int i=1;i<size;i++)
    {
        a[i]=a[i]+a[i-1];
        if(a[i]%2==1)
        {
            count++;
        }
    }
    cout<<"maximum length of sequence is "<<count;
    return 0;
}