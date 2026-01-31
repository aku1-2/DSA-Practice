//Given a connected undirected graph containing V vertices, represented by a 2-d adjacency list adj[][], where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Search (BFS) traversal starting from vertex 0, visiting vertices from left to right according to the given adjacency list, and return a list containing the BFS traversal of the graph.
//Time Complexity: O(V + E) for BFS traversal of the graph.
//Space Complexity: O(V) for the visited array and queue.

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int> ans;
        int V=adj.size();
        vector<int> vis(V,0);
        queue<int> q;
        
        q.push(0);
        vis[0]=1;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int n: adj[node]){
                if(!vis[n]){
                vis[n]=1;
                 q.push(n);
                    
                }
            }
        }
        return ans;
    }
};