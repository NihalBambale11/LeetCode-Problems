class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges,
                       vector<int>& restricted) {
        vector<vector<int>> v(n);
        for (int i = 0; i < edges.size(); i++) {
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }
        unordered_set<int> s(restricted.begin(), restricted.end());
        queue<int> q;
        vector<bool> visited(n, false);
        q.push(0);
        visited[0] = true;
        int count = 0;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            count++;

            for (int y : v[x]) {
                if (!visited[y] && !s.count(y)) {
                    visited[y] = true;
                    q.push(y);
                }
            }
        }
        return count;
    }
};