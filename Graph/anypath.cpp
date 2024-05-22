#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v;
unordered_set<int>visited;

void add_edge(int src, int dest, bool bi_dir=true)
{
    graph[src].push_back(dest);
    if(bi_dir)
        graph[dest].push_back(src);
}

bool dfs(int curr, int end)
{
    visited.insert(curr);
    if(curr == end) return true;
    for(auto neighbour: graph[curr])
    {
        if(!visited.count(neighbour))
        {
            bool result = dfs(neighbour, end);
            if (result) return true;
        }
    }
    return false;
}

bool anypath(int src, int dest)
{
    return dfs(src,dest);
}
int main()
{
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    int src,dest;
    for(int i=0;i<e;i++)
    {
        cin>>src>>dest;
        add_edge(src,dest);
    }
    cout<<anypath(0,4);
}