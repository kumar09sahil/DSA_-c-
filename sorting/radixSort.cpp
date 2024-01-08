#include<bits/stdc++.h>
using namespace std;
void countSort(vector <int> &v,vector <int> &a,vector <int> &b)
{
    auto max = max_element(v.begin(),v.end());
    vector <int> count((*max)+1,0);
    for(int i=0;i<v.size(); i++)
    {
        count[b[i]]++;
    }
    for(int i=1; i<count.size();i++)
    {
        count[i] = count[i] + count[i-1] ;
    }
    for(int i=v.size()-1; i>=0 ; i--)
    {
        a[count[b[i]]-1] = v[i];
        count[b[i]]--;
    }
    
}
void radix(vector <int> &v,vector <int> &a)
{
    auto max = max_element(v.begin(),v.end());
    vector <int> b(v.size());
    int c=0;
    while(*max>0)
    {
            *max = *max /10;
            c++;
    }
        for(int j=0; j<c ;j++)
        {
            for(int i=0; i<v.size(); i++)
            {
                b[i]= v[i]%10;
            }
            countSort(v,a,b);
        }
}

int main()
{
    vector <int> v;
    v = {2,4,1,5,8,3,20,28,23,1,1,2,23,0,0,76,12};
    vector <int> a(v.size());
    radix(v,a);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}