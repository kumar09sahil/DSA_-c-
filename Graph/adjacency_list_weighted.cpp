#include<bits/stdc++.h>
using namespace std;
int v;
vector<list<pair<int,int>>>graph;

void add_edge(int src, int dest, int weight, bool bi_dir=true)
{
    graph[src].push_back({dest,weight});
    if(bi_dir)
        graph[dest].push_back({src,weight});
}

void display(){
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<"-> ";
        for(auto el:graph[i])
            cout<<"("<<el.first<<" "<<el.second<<"), ";
        cout<<"\n";
    }
}
int main()
{
    cin>>v;
    int src,dest,weight;
    graph.resize(v);
    for(int i=0;i<v;i++)
    {
        cin>>src>>dest>>weight;
        add_edge(src,dest,weight,false);
    }
    display();

}