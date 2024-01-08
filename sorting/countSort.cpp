#include<bits/stdc++.h>
using namespace std;
int findMax(vector <int> &v)
{
    int max= v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]>max)
        max=v[i];
    }
    return max;
    
}
void countSort (vector <int> &v)
{
    int max = findMax(v);
    vector <int> count(max+1 , 0);
//     for (int i = 0; i < max+1; i++) {
//     count.push_back(0);
//   }
    for (int i = 0; i < v.size(); i++)
    {
        count[v[i]]++;
    }
    int i=0,j=0;
    while (i<max+1)
    {
        if(count[i]>0)
        {
            v[j++] = i;
            count[i]--;
        }
        else
        i++;
    }
}
int main()
{
    vector <int> v = {2,5,0,4,3,9,10,8,7,10,6,1};
    countSort(v);
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    return 0;
}