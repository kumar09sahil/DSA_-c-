#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,4,6,8,7,9,5};
    int x=12,trp=0;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            for(int k=j+1;k<8;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                trp++;
            }
        }
    }
    cout<<"triplets are "<<trp;
    return 0;
}