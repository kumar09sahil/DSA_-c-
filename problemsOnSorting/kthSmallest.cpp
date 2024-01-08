#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l ,int h)
{
    int pivot = a[l];
    int i=l;
    int j=h;
    do{
        do{
            i++;
        }while(a[i]<=pivot);

        while(a[j]>pivot){
            j--;
        }

        if(i<j)
        { 
            swap(a[i],a[j]);
        }

    }while(i<j);

      swap(a[l],a[j]);

    return j;      
}
int kthSmallest(int a[],int l,int h, int k)
{
        int pos = partition(a,l,h);
        if(pos-l == k-1)
            return a[pos];
        else if(pos-l > k-1)
            return kthSmallest(a,l,pos-1,k);
        else
            return kthSmallest(a,pos+1,h,k-pos+l-1);

    
}

    
int main()
{
    int a[] = {1,5,3,6,4,9,8,7,10,2};
    int h = sizeof(a)/sizeof(a[0]);
 
    int p=1;
   
    int ans = kthSmallest(a,0,h-1,p);
    cout<<p<<" smallest term is "<<ans<<endl; 
    return 0;

}