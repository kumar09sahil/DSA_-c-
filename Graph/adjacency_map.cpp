#include <bits/stdc++.h>
using namespace std;

int v; // Number of vertices
vector<unordered_map<int, int>> graph;

void add_edge(int src, int dest, int weight, bool bi_dir=true) {
    graph[src][dest] = weight;
    if (bi_dir) {
        graph[dest][src] = weight;
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) {
            cout << "(" << el.first << " " << el.second << "), ";
        }
        cout << "\n";
    }
}

int main() {
    int e; // Number of edges
    cin >> v >> e;
    graph.resize(v);

    int src, dest, weight;
    for (int i = 0; i < e; i++) {
        cin >> src >> dest >> weight;
        add_edge(src, dest, weight);
    }

    display();

    return 0;
}
