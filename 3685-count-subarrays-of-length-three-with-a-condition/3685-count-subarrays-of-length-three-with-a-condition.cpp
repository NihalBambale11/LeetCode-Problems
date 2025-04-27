class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i = 0 ;
        int j = 0 ;
        int  sum = 0;
        int count = 0;

        while(j < nums.size()){
            if(j-i+1 == 3){
                sum = nums[i] + nums[j];
                if(2 * sum == nums[i+1]){
                    count++;
                }
                
                i++;
            }
            j++;
        }
        return count;
    }
};