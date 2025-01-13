class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        vector<priority_queue<int>> vpq;
        for(auto x : nums){
            priority_queue<int> pq;
            for(int y : x){
                pq.push(y);
            }
            vpq.push_back(pq);
        }
        int sum = 0;
        for(int i = 0 ; i < nums[0].size();i++){
            priority_queue<int> pq1;
            for(int j = 0 ; j < nums.size() ; j++){
                int y = vpq[j].top();
                vpq[j].pop();
                pq1.push(y);
            }

            sum = sum  + pq1.top();
        }
        return sum;
    }
};