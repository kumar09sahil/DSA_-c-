#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int largest(int a[],int size)
{
    int max=INT16_MIN,second_max=INT16_MIN;
    int idx;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]>second_max&&a[i]!=max)
        {
        second_max=a[i];
        }
    }
    return second_max;
}
int main()
{
    int sec_larg;
    int a[]={1,8,4,15,9,20,10};
    sec_larg=largest(a,7);
    cout<<"second largest element is "<<sec_larg;
    return 0;

}