#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int>visited;
int v;
vector<vector<int>> result;

void add_edge(int src, int dest, bool bi_dir=true)
{
    graph[src].push_back(dest);
    if(bi_dir)
        graph[dest].push_back(src);
}

void allpath(int curr, int end, vector<int>&path)
{
    if(curr== end)
    {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour: graph[curr])
    {
        if(!visited.count(neighbour))
            allpath(neighbour,end,path);
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

int main()
{
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    int src, dest;
    for(int i=0;i<e;i++)
    {
        cin>>src>>dest;
        add_edge(src,dest);
    }
    vector<int>path;
    allpath(0,4,path);
    // cout<<result.size()<<" ";
    for(int i=0;i<result.size();i++)
    {
        for(auto el: result[i])
            cout<<el<<" ";
        cout<<"\n";
    }
}