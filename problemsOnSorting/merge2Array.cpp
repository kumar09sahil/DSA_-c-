#include<bits/stdc++.h>
using namespace std;
void Merge2Arrar(vector <int> &v1, vector <int> &v2)
{
    int size = (v1.size()+v2.size());
    vector <int> n(size);
    int i=0,j=0,k=0;
    while(i<v1.size())
    {
        if(v1[i]<v2[j])
        {
            n[k++]=v1[i++];
        }
        else 
        {
            n[k++]= v2[j++];
        }

    }
    for(;i<v1.size();i++)
    {
        n[k++]=v1[i++];
    }
    for(;j<v2.size();j++)
    {
        n[k++]=v2[j++];
    }

    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
    }
}
int main()
{
    vector <int> v1 = {2,5,6};
    vector <int> v2 = {1,3,4,7};
    Merge2Arrar(v1,v2);
    return 0;
}