class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        long long sum = 0 ;
        for(int i = 0 ; i < k ; i++){
            int x = pq.top();
            sum = sum + x;
            pq.pop();
            x = ceil(x / 3.0);
            pq.push(x);
        }
        
        return sum;
    }
};