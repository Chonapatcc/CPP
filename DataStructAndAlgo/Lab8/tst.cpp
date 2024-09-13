#include <iostream>
#include <vector>
#include <set>
using namespace std;

void dfs(int node, int parent, vector<bool>& visited, vector<vector<int>>& adj, set<int>& cycleVertices, bool& cycleFound) {
    visited[node] = true;

    // Traverse all adjacent vertices
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, node, visited, adj, cycleVertices, cycleFound);
        }
        // Cycle detected if the neighbor is visited and is not the parent
        else if (neighbor != parent) {
            cycleFound = true;
            cycleVertices.insert(node);
            cycleVertices.insert(neighbor);
        }
    }
}

bool isTree(int n, vector<pair<int, int>>& edges) {
    // A tree must have exactly n-1 edges
    if (edges.size() != n - 1) return false;

    // Create adjacency list
    vector<vector<int>> adj(n + 1);
    for (auto edge : edges) {
        int u = edge.first, v = edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Initialize visited array and cycle detection
    vector<bool> visited(n + 1, false);
    set<int> cycleVertices;
    bool cycleFound = false;

    // Start DFS from node 1
    dfs(1, -1, visited, adj, cycleVertices, cycleFound);

    // Check if the graph is connected (all nodes should be visited)
    // for (int i = 1; i <= n; i++) {
    //     if (!visited[i]) return false;
    // }

    // If a cycle is found, the graph is not a tree
    if (cycleFound) {
        cout << "Cycle exists with vertex ";
        for (int v : cycleVertices) {
            cout << v << " ";
        }
        cout << endl;
        return false;
    }

    return true; // Graph is connected and acyclic, hence it's a tree
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> edges;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    if (isTree(n, edges)) {
        cout << "Is a tree" << endl;
    } else {
        cout << "Is not a tree" << endl;
    }

    return 0;
}
