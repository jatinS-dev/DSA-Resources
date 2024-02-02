private:
    void dfs(int node, vector<int> adj[], int vis[]) {
        vis[node] = 1;
        // ls.push_back(node);/
        
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjL[V];
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                if(adj[i][j] == 1 && i != j) {
                    adjL[i].push_back(j);
                    adjL[j].push_back(i);
                } 
            }
        }
        
        // DFS Code 
        int vis[V] = {0};
        int cnt = 0;
        for(int i = 0; i < V; ++i) {
            if(!vis[i]) {
                cnt++;
                dfs(i, adjL, vis);
            }
        }
        
        return cnt;
        
    }
