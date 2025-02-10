class Solution {
public:
    string removeTrailingZeros(string nums) {
        int count = 0;
        for (int i = nums.length() - 1; i >= 0; i--) {
            if (nums[i] != '0') {
                break;
            } else {
                count++;
            }
        }

        //nums.erase((nums.length() - count), nums.end());
        //nums.erase( (nums.begin() + (nums.length()-count)) , nums.end() );
        nums.erase(nums.length() - count);
        //nums.erase(nums.begin() + (nums.length() - count), nums.end());

        return nums;
    }
};