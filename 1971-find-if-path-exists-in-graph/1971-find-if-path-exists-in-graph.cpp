class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> graph(n, vector<int>());
        
        for (const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(source);
        vis[source] = true;
        while(!q.empty()){
            int x  = q.front();
            q.pop();
            
            if(x == destination){
                return true;
            }
            
            for(auto y : graph[x]){
                if(!vis[y]){
                    q.push(y);
                    vis[y] = true;
                }
            }
        }
        

        
        return false;
    }
};