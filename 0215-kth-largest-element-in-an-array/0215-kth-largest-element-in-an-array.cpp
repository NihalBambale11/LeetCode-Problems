class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
        }

        int count = 1;
       while(!pq.empty()){
            if(count == k){
                return pq.top();
            }
            else{
                pq.pop();
                count++;
            }
        }
        return 0;
    }
};