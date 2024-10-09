class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int count = 0 ;
        for(int i = 0 ; i < nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
        }
        
        vector<int> v (nums.begin(),nums.end());
        
        vector<int> v1;
        for(auto x : v){
            if(x != 0){
                v1.push_back(x);
            }
            else{
                count++;
            }
        }
        
        for(int i = 0 ; i < count ; i++){
            v1.push_back(0);
        }
        
        return v1;
    }
};