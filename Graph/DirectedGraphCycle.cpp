/*Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.
The graph is represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge from vertex u to v.*/
// Time Complexity: O(V + E) for DFS traversal of the graph.
// Space Complexity: O(V) for the visited array and recursion stack.



// Here we use visited array to keep track of visited nodes and Pathvisited array to keep track of nodes in the current DFS path. If we encounter a node that is already in the current DFS path, we have found a cycle.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
  
  bool dfs(int node,vector<int> adj[], vector<int> &vis, vector<int> &pathvis){
      vis[node]=1;
      pathvis[node]=1;
      for(int i: adj[node]){
          if(!vis[i]){
              if(dfs(i,adj,vis,pathvis)==true) return true;
          }
          else if(pathvis[i])
          return true;
      }
      
      
      pathvis[node]=0;
      return false;
  }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        vector<int> adj[V];
        for(auto &i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        
       vector<int> vis(V,0);
       vector<int> pathvis(V,0);
       
       for(int i=0;i<V;i++){
           if(!vis[i]){
               if(dfs(i,adj,vis,pathvis)==true) return true;
           }
       }
       return false;
    }
};