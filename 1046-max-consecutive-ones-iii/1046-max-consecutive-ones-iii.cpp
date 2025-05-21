class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0; 
        int j = 0;
        int temp = k;
        int maxi = 0;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                temp--; 
            }
            while (temp < 0) { 
                if (nums[i] == 0) {
                    temp++;
                }
                i++; 
            }
            maxi = max(maxi, j - i + 1); 
            j++;
        }
        return maxi;
    }
};