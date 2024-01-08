// Q2 - ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
// man starts his trek on point 0 with altitude equal 0. You are given an integer array height
// of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
// (0 <= i < n). Return the highest altitude of a point.

// Input:height=[ -4,1,6,0,-8]
// Output:3
// Explanation:The man starts at 0 and since then the altitudes covered will be [0, 4, 3,3,3, 5] so
// the greatest altitude will be 3

// Input:height=[-5, -3, -2]
// Output:0
// Explanation:The man starts at 0 and since then the altitudes will be[0, 5, 3, 2] so the greatest
// altitude will be 0.



#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main()
{
    // int a[]={-4,1,6,0,-8};
    int a[]={-5, -3, -2};
    int size=sizeof(a)/sizeof(a[1]);
    int max=0;
    for(int i=1;i<size;i++)
    {
       a[i]=a[i]+a[i-1];
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<"max altitude is "<<max;
    return 0;
}