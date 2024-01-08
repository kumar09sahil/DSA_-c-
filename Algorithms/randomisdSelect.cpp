#include<bits/stdc++.h>
#include<random>
using namespace std;
int randomisedPartition(int a[], int l, int h)
{
    int random_index = rand() % 10;
    int x = a[random_index];
    int j=l-1;
    for (int i = l; i < h; i++)
    {
        if(a[i]<=x)
        {
            j++;
            swap(a[i],a[j]);
        }
    }
    swap(a[j+1],a[h]);
    return j+1;
    
}
int randomisedSelect(int a[],int l,int h,int p)
{
    if(l==h)
        return a[l];
    int q = randomisedPartition(a,l,h);
    int k = q-l+1;
    if(p==k)
        return a[q];
    if(p<k)
        return randomisedSelect(a,l,q-1,p);
    else
        return randomisedSelect(a,q+1,h,p-k);
}
int main()
{
    int a[] = {1,5,3,2,6,7,9,8,4,10};
    int ans = randomisedSelect(a,0,10,11);
    cout<<ans<<" ";
    return 0;
}