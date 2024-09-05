#include <iostream>
#include <stack>
#include <vector>
using namespace std;


// Implementing DFS Iteratively, Checking Connectivity, and Detecting Cycles
// a) Iterative DFS
// While DFS is typically implemented recursively, it's also possible to do it iteratively using a stack. Here's how:

void iterativeDFS(const vector<vector<int>>& graph, int start) {
    stack<int> stack;
    vector<bool> visited(graph.size(), false);

    stack.push(start);
    visited[start] = true;

    while (!stack.empty()) {
        int current = stack.top();
        stack.pop();

        // Process current vertex (e.g., print it)
        cout << current << " ";

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                stack.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

// b) Checking Connectivity with DFS
// To check if a graph is connected, we can start a DFS from any vertex and see if it visits all vertices. If it does, the graph is connected.

bool isConnected(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    int start = 0; // Choose any starting vertex

    iterativeDFS(graph, start, visited);

    for (bool v : visited) {
        if (!v) {
            return false; // Found an unvisited vertex
        }
    }

    return true;
}

// c) Detecting Cycles with DFS
// To detect cycles, we can use a parent array to track the parent of each visited vertex. If we encounter a visited vertex that is not the parent of the current vertex, it indicates a cycle.

bool hasCycle(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    vector<int> parent(n, -1);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            if (dfsCycle(graph, i, visited, parent)) {
                return true; // Cycle found
            }
        }
    }

    return false;
}

bool dfsCycle(const vector<vector<int>>& graph, int current, vector<bool>& visited, vector<int>& parent) {
    visited[current] = true;

    for (int neighbor : graph[current]) {
        if (!visited[neighbor]) {
            parent[neighbor] = current;
            if (dfsCycle(graph, neighbor, visited, parent)) {
                return true;
            }
        } else if (neighbor != parent[current]) {
            return true; // Back edge found, indicating a cycle
        }
    }

    return false;
}


