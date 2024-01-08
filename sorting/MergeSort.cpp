#include<bits/stdc++.h>
using namespace std;
void outplaceMerge(int v[],int l,int mid, int h)
{
    int k=l;
    int i=l;
    int j=mid+1;
    int b[h];
    while(i<=mid && j<=h)
    {
        if(v[i] < v[j])
            b[k++] = v[i++]; 
        else
            b[k++] = v[j++];
    }
    while(i<=mid)
    {
        b[k++] = v[i++];
    }
    while(j<=h)
    {
        b[k++] = v[j++];
    }
    for (int i = l; i <= h; i++)
    {
        v[i] = b[i];
    }
}
void mergeSort(int a[],int l ,int h)
{
    if(l<h)
    {
        int m= (l+h)/2;     
        mergeSort(a,l,m);
        mergeSort(a,m+1,h);
        outplaceMerge(a,l,m,h);
    }
}

int main()
{   
    int a[] ={0,2,1,35,4,7,6,10,9,8,5};
    mergeSort(a,0,10);
    for (int i = 0; i <= 10; i++)
    {
       cout<<a[i]<<" ";
    }
    return 0;
    
}