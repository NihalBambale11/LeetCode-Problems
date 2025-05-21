class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0; 
        int j = 0;

        int maxi = 0;
        while(j < nums.size()){
            if(nums[j] == 1){
                maxi = max(maxi , j - i + 1);
            }
            else{
                i = j+1;
            }
            j++;
        }
        return maxi;
    }
};