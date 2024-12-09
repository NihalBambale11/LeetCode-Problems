class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i = 0 ; i < queries.size();i++){
            vector<int> v = queries[i];
            int add = v[0];
            int index = v[1];
            
            nums[index] = nums[index] + add;
            int sum = 0;
            for(int i = 0 ; i < nums.size() ; i++)
            {
                if(nums[i] % 2 == 0){
                    sum = sum + nums[i];
                    
                }
                
            }
            ans.push_back(sum);
        }
        return ans;
    }
};