class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        priority_queue<pair<int,pair<int,int>>> pq;
        
        for(auto x : nums1){
            for(auto y : nums2){
                int sum = x + y;
                if(pq.size() < k){
                    pq.push({sum,{x,y}});
                }
                else if(sum < pq.top().first){
                    pq.pop();
                    pq.push({sum,{x,y}});
                }
                else{
                    break;
                }
            }
        }
        
        vector<vector<int>> v;
        while(!pq.empty()){
            auto p = pq.top().second;
            pq.pop();
            v.push_back({p.first ,p.second});
        }
        
        return v;
    }
};