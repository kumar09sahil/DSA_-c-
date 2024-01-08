// Q3 - ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
// sequence which contains equal numbers of 0 and 1.
// Input:arr=[0,1,0,1]
// Output:4
// Explanation:The longest sequence is 0,1,0,1

// Input:arr=[0,1,1,0,1,1,1]
// Output:4
// Explanation:The longest sequence is 0,1,1,0


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={0,1,1,0,1,1,1};
    int size=sizeof(a)/sizeof(a[1]);
    int c=0,d=0,count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
            c++;
        else if (a[i]==1)
            d++;
        if(c==d)
            count=c+d;
    }
    cout<<"maximum length of sequence is "<<count;
    return 0;
}