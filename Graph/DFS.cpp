// Given a connected undirected graph containing V vertices represented by a 2-d adjacency list adj[][], where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Search (DFS) traversal starting from vertex 0, visiting vertices from left to right as per the given adjacency list, and return a list containing the DFS traversal of the graph.
// time Complexity: O(V + E) for DFS traversal of the graph.
// Space Complexity: O(V) for the visited array and recursion stack.


#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
  
      void helper(int node, vector<vector<int>>& adj, vector<int>& vis,vector<int>& ans){
          vis[node]=1;
          ans.push_back(node);
          
          
          for(int n : adj[node]){
              if(!vis[n])
              helper(n,adj,vis,ans);
          }
      }
  
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V =adj.size();
        
        vector<int> ans;
        vector<int> vis(V,0);
        helper(0,adj,vis,ans);
        return ans;
    }
};