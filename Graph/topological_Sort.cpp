#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v;

void addEdge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir == true)
        graph[dest].push_back(src);
}

void topoBfs(){
    vector<int>indegree(v,0);
    unordered_set<int>vis;
    for(int i=0;i<graph.size();i++)
    {
        for(auto neighbour : graph[i])
        {
            //* i---> neighbour 
            indegree[neighbour]++;
        }
    }
    queue<int>q;

    //* multisource bfs start
    for(int i=0;i<indegree.size();i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
            vis.insert(i);
        }
    }
    while(! q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto neighbour : graph[node])
        {
            if(!vis.count(neighbour))
            {
                indegree[neighbour]--;
                if(indegree[neighbour] == 0)
                {
                    q.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}

int main(){
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        addEdge(u,v,false);
    }
    topoBfs();
}