#include <iostream>
#include <vector>

using namespace std;

vector<int> subtree_sizes; // To store the subtree sizes for each node
vector<vector<int>> graph; // Adjacency list representation of the tree
vector<bool> visited;      // To mark visited nodes

// Function to perform DFS and find the subtree size rooted at the given node
int findSubtreeSize(int node) {
    visited[node] = true;
    int subtreeSize = 1;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            subtreeSize += findSubtreeSize(neighbor);
        }
    }

    subtree_sizes[node] = subtreeSize; // Update the subtree size for the current node
    return subtreeSize;
}

int main() {
    int n; // Number of nodes in the tree
    cin >> n;

    graph.resize(n);
    subtree_sizes.resize(n, 0);
    visited.resize(n, false);

    // Read the edges of the tree
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        // Assuming 0-based indexing of nodes
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1); // For undirected tree
    }

    findSubtreeSize(0); // Start DFS from the root (node 0)

    // Output the subtree sizes
    for (int i = 0; i < subtree_sizes.size(); ++i) {
        cout << "Node " << i + 1 << ": Subtree Size = " << subtree_sizes[i] << endl;
    }

    return 0;
}
