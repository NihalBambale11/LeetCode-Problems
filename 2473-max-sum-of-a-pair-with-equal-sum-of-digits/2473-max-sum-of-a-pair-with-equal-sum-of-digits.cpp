class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int>> mpq;
        for(int x : nums){
            int sum = 0;
            int temp = x;
            while(temp != 0){
                int rem = temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }

            mpq[sum].push(x);
        }
        int maxi = -1;
        int tempsum;
        for(auto x : mpq){
            if(x.second.size() > 1){
                tempsum = x.second.top();
                x.second.pop();
                tempsum = tempsum + x.second.top();
                maxi = max(maxi,tempsum);
            }
        }
        return maxi;
    }
};