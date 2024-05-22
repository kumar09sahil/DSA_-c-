#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&parent, int x){
    if(parent[x] == x) return x;
    return parent[x] = find(parent, parent[x]);
}

void Union(vector<int>&parent, vector<int>&rank, int a, int b){
    a = find(parent,a);
    b = find(parent, b);
    if(rank[a] < rank[b])
    {
        rank[b]++;
        parent[a] = b;
    }
    else{
        rank[a]++;
        parent[b] = a;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>parent(n+1);
    vector<int>rank(n+1,0);
    int m;
    cin>>m; // number of queries
    for(int i=0;i<n; i++)
    {
        parent[i] = i;
    }

    while(m--){
        string str;
        cin>>str;
        if(str == "union")
        {
            int x,y;
            cin>>x>>y;
            Union(parent,rank,x,y);
        }
        else
        {
            int x;
            cin>>x;
            cout<<find(parent,x);
        }
    }

}