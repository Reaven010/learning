class Solution {
	public:
	vector<int> bfs(vector<vector<int>> &adj) {
		// code here
		queue<int>q;
		vector<bool>visited(adj.size(),0);
		q.push(0);
		visited[0]=1;
		vector<int>ans;
		while(!q.empty()){
		    int node=q.front();
		    q.pop();
		    ans.push_back(node);
		    for(int i=0;i<adj[node].size();i++){
		        if(visited[adj[node][i]]==0){
		            q.push(adj[node][i]);
		            visited[adj[node][i]]=1;
		            
		        }
		    }
		}
		return ans;
	}
};
