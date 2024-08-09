class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int rem;
        for(int i = 0 ; i < nums.size() ; i++){
            vector<int> temp;

            while(nums[i] != 0 ){
                rem  = nums[i] % 10;
                temp.push_back(rem);
                nums[i] = nums[i] / 10;
            }
            reverse(temp.begin(),temp.end());
            for(int x : temp){
                ans.push_back(x);
            }
        }
        
        return ans;
        
    }
};