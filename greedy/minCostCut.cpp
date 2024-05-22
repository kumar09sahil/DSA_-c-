#include<bits/stdc++.h>
using namespace std;

bool cmp (int x, int y){
    return x>y;
}

long long int mincostGridcut(int m, int n, vector<int>vertical, vector<int>horizontal)
{
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int h=0, v=0; // two pointer to traverse the two given arrays
    //* hz and vr to keep track of horizontal and vertical cut
    int hz=1;
    int vr = 1;
    long long int ans=0;
    while(v<vertical.size() && h<horizontal.size())
    {
        if(vertical[v] > horizontal[h])
        {
            ans += vertical[v]*hz;
            vr++;
            v++;
        }
        else
        {
            ans += horizontal[h]*vr;
            hz++;
            h++;
        }
    }
    while(v<vertical.size())
    {
        ans += vertical[v]*hz;
            vr++;
            v++;
    }
    while (h<horizontal.size())
    {
        ans += horizontal[h]*vr;
            hz++;
            h++;
    }
    return ans;

}

int main(){
    int m,n;
    cin>>m>>n;
    vector<int>vertical;
    vector<int>horizontal;
    for(int i=0;i<m-1;i++)
    {
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        horizontal.push_back(x);
    }

    cout<<mincostGridcut(m,n,vertical,horizontal)<<endl;
}
