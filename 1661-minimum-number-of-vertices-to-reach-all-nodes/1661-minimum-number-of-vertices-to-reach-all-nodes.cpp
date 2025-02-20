class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n,0);

        for(auto x : edges){
            indegree[x[1]]++;
        }

        vector<int> v;
        for(int i = 0 ;i < n ; i++){
            if(indegree[i] == 0){
                v.push_back(i);
            }
        }
        return v;
    }
};