#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
    void dfs(int node,vector<vector<int>>& adj,vector<int>&ans,vector<bool>&visited){
        visited[node]=1;
        ans.push_back(node);
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                dfs(adj[node][i],adj,ans,visited);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool>visited(adj.size(),0);
        vector<int>ans;
        dfs(0,adj,ans,visited);
        return ans;
    }
};