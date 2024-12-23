class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        unordered_map<int, vector<pair<int, int>>> graph;
        for (const auto& road : roads) {
            int u = road[0], v = road[1], dist = road[2];
            graph[u].push_back({v, dist});
            graph[v].push_back({u, dist});
        }
        
        stack<int> s;
        s.push(1);
        
        vector<bool> vis(n,false);
        
        vis[1] = true;
        int mini = INT_MAX;
        while(!s.empty()){
            int x = s.top();
            s.pop();
            
            
            for(auto y : graph[x]){
                
                int z = y.first;
                int dist = y.second;
                
                mini = min(mini,dist);
                
                if(!vis[z]){
                    s.push(z);
                    vis[z] = true;
                }
                

            }
        }
        
        return mini;
         
    }
};