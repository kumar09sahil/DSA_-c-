#include<bits/stdc++.h>
using namespace std;
int two_Dsearch(vector <vector<int>> &v, int target)
{
    int m=v.size();
    int n= v[0].size();
    int low = 0;
    int high =m*n -1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        int x = mid/n;
        int y = mid%n;
        if(v[x][y]== target)
        {
            return 1;
        }
        else if(v[x][y] < target)
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
    }
    return 0;
}
int main()
{
    vector <vector <int>> v = {{1,2,3,5},{10,11,15,20},{23,30,34,50}};
    cout<<two_Dsearch(v,1);
    return 0;
}