class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> v(queries.size(),false);
        vector<int> presum(nums.size() ,0);
        presum[0] = 0;
        
        for(int i =1 ; i < nums.size() ; i++){
            if(nums[i] % 2 == nums[i-1] % 2 ){
                presum[i] = presum[i-1]  + 1;
            }
            else{
                presum[i] = presum[i-1];
            }
        }
        
        for(int i = 0; i < queries.size() ;i++){
            vector<int> query = queries[i];
            int start = query[0];
            int end  = query[1];
            
            if(presum[end] - presum[start] == 0){
                v[i] = true;
            }
            else{
                v[i] = false;
            }
        }
        
        return v;
        
    }
};