class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        
        for(int i = 0; i < nums.size() ;i++){
            pq.push({nums[i], i});
        }
        
        
        for(int i = 0 ; i < k ; i++){
            int mul = pq.top().first;
            int index = pq.top().second;
            pq.pop();
            pq.push({mul*multiplier ,index});
        }
        
        int n = nums.size();
        vector<int> v(n);
        while(!pq.empty()){
            v[pq.top().second] = pq.top().first;
            pq.pop();
        }
        return v;
    }
};