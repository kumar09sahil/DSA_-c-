#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int largest(int a[],int size)
{
    int max=INT16_MIN;
    int idx;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        idx=i;
        }
    }
    return max;
}
int main()
{
    int larg,index,seclarge;
    int a[]={1,8,20,13,9,20,10};
    larg=largest(a,7);
    for(int i=0;i<7;i++)
    {
        if(a[i]==larg)
        a[i]=-1;
    }
    seclarge=largest(a,7);
    cout<<"second largest element is "<<seclarge;
    return 0;

}