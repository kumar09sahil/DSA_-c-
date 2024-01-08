#include<bits/stdc++.h>
using namespace std;
int partition(vector <int> &v, int l, int h)
{
    int pivot = v[l];
    int i=l, j=h;
    do{
        do{ i++; }while(v[i]<=pivot);
        do{ j--; }while(v[j]>pivot);
        if(i<j)
            swap(v[i],v[j]);
    }while(i<j);
    if(i>j)
    swap(v[l],v[j]);
    return j;
}

void QuickSort(vector <int> &v,int l,int h)
{
    if(l<h)
    {
        int p = partition(v,l,h);
        QuickSort(v,l,p);
        QuickSort(v,p+1,h);
    }
    
}
int main()
{
    vector <int> v= {1,4,2,5,6,3,9,8,7,10};
    QuickSort(v,0,v.size());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
        return 0;
}