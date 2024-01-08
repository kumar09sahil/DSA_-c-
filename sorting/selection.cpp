#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector <int> &v)
{
    int k;
    for(int i=0;i<v.size();i++)
    {
        int k=i;
        for(int j=i;j<v.size();j++)
        {
            
            if(v[j]<v[k])
            {
                k=j;
            }
        }
        swap(v[k],v[i]);
    }
}
int main()
{
 vector <int> v = {0,4,1,6,2,8,10,5,7,9,3};
 selectionSort(v);
 for (int i = 0; i < v.size(); i++)
 {
    cout<<v[i]<<" ";
 }
 
    return 0;
}