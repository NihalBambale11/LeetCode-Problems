class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size());
        for(int i = 0 ;  i < nums.size() ; i++ ){
            for(int j = i ; j > index[i]; j--){
                target[j] = target[j-1];
            }
            
            target[index[i]] =  nums[i];
        }
        return target;
    }
    
};