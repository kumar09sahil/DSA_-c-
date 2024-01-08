//* move all the zero to the end while maintaining the realtive order of non zero elements
//! do it inplace without making a copy

#include<bits/stdc++.h>
using namespace std;
void MoveZero(vector <int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        int flag = false;
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j]== 0 && v[j+1]!= 0)
            {
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
         if(flag == false )
            break;
    }
    
    for(int i= 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector <int> v = {0,2,0,1,0,3,0,5,0};
    MoveZero(v);
    return 0;
}