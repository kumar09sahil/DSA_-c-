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

void display(){
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<"-> ";
        for(auto el:graph[i])
            cout<<el<<", ";
        cout<<"\n";
    }
}
int main()
{
    cin>>v;
    int src,dest;
    graph.resize(v);
    for(int i=0;i<v;i++)
    {
        cin>>src>>dest;
        add_edge(src,dest);
    }
    display();

}