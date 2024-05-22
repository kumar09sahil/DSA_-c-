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

void bfs(int start, vector<int>&dist){
    queue<int>q;
    dist[start] = 0;
    q.push(start);
    visited.insert(start);
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        for(auto neighbour : graph[curr])
        {
            if(!visited.count(neighbour))
            {
                visited.insert(neighbour);
                q.push(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}

int main()
{
    cin>>v;
    graph.resize(v);
    int neighbour;
    cin>>neighbour;
    int src,dest;
    vector<int>dist(v,INT_MAX);
    for(int i=0;i<neighbour;i++)
    {
        cin>>src>>dest;
        add_edge(src,dest);
    }
    bfs(0,dist);
    cout<<"\n";
    for(int i=0;i<v;i++)
    {
        cout<<dist[i]<<" ";
    }
}