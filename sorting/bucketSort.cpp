#include<bits/stdc++.h>
using namespace std;
void bucketSort(float a[], int size)
{
    vector <vector<float> > bucket (size,vector<float> ());
    float max_ele = a[0];
    float min_ele = a[0];
    for (int i = 0; i < size; i++)
    {
        max_ele = max(max_ele,a[i]);
        min_ele = min(min_ele,a[i]);
    }
    float range = (max_ele - min_ele)/size;
    for(int i=0;i<size; i++)
    {
        // int index = a[i]*size;
        int index = (a[i] - min_ele)/range;
        float boundary = (a[i] - min_ele)/range - index;
        if(boundary == 0 && a[i]!= min_ele)
        {
            bucket[index-1].push_back(a[i]);
        }
        else{
            bucket[index].push_back(a[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(!bucket[i].empty())
        {
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(!bucket[i].empty())
        {
             for (int  j= 0; j<bucket[i].size(); j++)
            {
                cout<<bucket[i][j]<<" ";
            }
        }
    }  
}
int main()
{
    float a[] = {3.16,9.354,5.87,1.364,6.52,4.46};
    bucketSort(a,6);
    return 0;
}