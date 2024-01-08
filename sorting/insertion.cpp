#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector <int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        int j = i-1;
        int x= v[i];
        while(j>-1 && v[j]>x)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = x;
    }
}
int main()
{
    vector <int> v = {2,1,4,3,5,7,6,8,10,9,0};
    insertionSort(v);
    for(int i= 0 ;i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}