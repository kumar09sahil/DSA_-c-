#include<bits/stdc++.h>
using namespace std;
int v;
vector<list<int>> graph;

void add_edge(int src, int dest, bool bi_dir=true)
{
    graph[src].push_back(dest);
    if(bi_dir)
        graph[dest].push_back(src);
}

void dfs(int src, unordered_set<int>&visited)
{
    visited.insert(src);
    for(auto neighbour : graph[src])
    {
        if(!visited.count(neighbour))
            dfs(neighbour, visited);
    }
}

void connected_component()
{
    //* make dfs call for each node and check how many dfs call we can make
    int result = 0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++)
    {
        if(visited.count(i) == 0)
        {
            result++;
            dfs(i,visited);
        }
    }
    cout<<result<<"\n";
}

int main()
{
    cin>>v;
    int src,dest;
    graph.resize(v);
    int e;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cin>>src>>dest;
        add_edge(src,dest);
    }
    connected_component();

}