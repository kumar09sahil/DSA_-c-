// Q5 - Given an integer array arr, return an array ans such that ans[i] is equal to the product of
// all the elements of arr except arr[i].
// Input:[1,3,5,7]
// Output:[105,35,21,15]
// Explanation:[3*5*7,1*5*7,1*3*7,1*3*5]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[]={1,3,7,5};
    int a[]={-5,-4,0,4,5};

    int size=sizeof(a)/sizeof(a[1]);
    int v[size];
    for(int i=0;i<size;i++)
    {
        int mult=1;
        for(int j=0;j<size;j++)
        {
            if(j==i)
            {
                continue;
            }
            else
            {
                mult=mult*a[j];
            }
        }
        v[i]=mult;
    }
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    return 0;

}