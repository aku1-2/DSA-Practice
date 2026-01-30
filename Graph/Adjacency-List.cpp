// Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
// Time Complexity: O(V + E) for creating the adjacency list.
// Space Complexity: O(V + E) for storing the adjacency list.

#include <iostream>
#include <vector>
using namespace std;
 
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector<vector<int>> adj(V);
        for(int i=0;i< edges.size(); i++){
            int u= edges[i].first;
            int v= edges[i].second;
            adj[u].push_back(v);
            adj[v].push_back(u);
            
            
        }
        return adj;
    }
};