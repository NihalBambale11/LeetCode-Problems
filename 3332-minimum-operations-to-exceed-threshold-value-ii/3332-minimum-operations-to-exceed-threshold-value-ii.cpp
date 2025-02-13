class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long , vector<long long >, greater<>> pq(nums.begin(),nums.end());
        int count= 0;
        while(pq.top() < k){
            long long  first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long res = (first*2) + second;
            pq.push(res);
            count++;
        }
        return count;
    }
};