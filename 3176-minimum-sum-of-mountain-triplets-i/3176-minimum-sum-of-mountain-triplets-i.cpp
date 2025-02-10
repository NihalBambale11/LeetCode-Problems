class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int mini = INT_MAX;
        bool flag = false;
        int sum ;
        for(int i = 0 ; i < nums.size();i++){
            for(int j = i+1 ; j < nums.size();j++){
                for(int k = j+1 ; k < nums.size();k++){
                    if(nums[i] < nums[j]  && nums[k] < nums[j]){
                        sum = nums[i] + nums[j] + nums[k];
                        mini = min(mini , sum);
                        flag = true;
                    }
                }
            }
        }
        if(!flag){
            return -1;
        }
        return mini;
    }
};