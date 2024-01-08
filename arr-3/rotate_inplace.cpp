#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int n=v.size();
    int k=5;
    k=k%n;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    return 0;
}