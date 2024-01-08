#include<bits/stdc++.h>
using namespace std;
void bubbleSort (vector <int> &v)
{
    for(int i=0;i<v.size();i++)
    {
         int flag = 0;
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag=1;
            }
        }
            if(flag==0)
                break;
    }
}
int main()
{
    vector <int> v = {1,4,37,6,2,75,8,1,9};
    bubbleSort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
