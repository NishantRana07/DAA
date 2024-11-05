#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on a graph
void BFS(int startNode, vector<vector<int>>& adjList) {
    vector<bool> visited(adjList.size(), false); // To keep track of visited nodes
    queue<int> q; // Queue for BFS

    // Start from the given node
    q.push(startNode);
    visited[startNode] = true;

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // Process the current node

        // Visit all unvisited adjacent nodes
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    cout << endl;
}

int main() {
    // Example graph as an adjacency list
    vector<vector<int>> adjList = {
        {1, 2},    // Node 0 is connected to Node 1 and 2
        {0, 3, 4}, // Node 1 is connected to Node 0, 3, and 4
        {0, 5, 6}, // Node 2 is connected to Node 0, 5, and 6
        {1},       // Node 3 is connected to Node 1
        {1},       // Node 4 is connected to Node 1
        {2},       // Node 5 is connected to Node 2
        {2}        // Node 6 is connected to Node 2
    };

    BFS(0, adjList); // Perform BFS starting from node 0
    return 0;
}
