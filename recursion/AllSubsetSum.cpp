#include<bits/stdc++.h>
using namespace std;
void sumis (int *a, int i, int n, int sum, vector <int> &result)
{
    if(i==n)
    {
        result.push_back(sum);
        return ;
    }
    sumis(a,i+1,n,sum+a[i],result);
    sumis(a,i+1,n,sum,result);

}
int main()
{
    int a[] ={1,2,3};
    vector<int> result;
    sumis(a,0,3,0,result);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}