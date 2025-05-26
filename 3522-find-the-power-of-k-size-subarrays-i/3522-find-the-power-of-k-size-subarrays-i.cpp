
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int idx = 0;
        vector<int> v(nums.size() - k + 1, -1);

        while (j < nums.size()) {
            if (j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {
                bool isValid = true;
                int temp = i;
                while (temp < j) {
                    if (nums[temp + 1] != nums[temp] + 1) {
                        isValid = false;
                        break;
                    }
                    temp++;
                }

                if (isValid) {
                    v[idx] = nums[j];
                }

                i++;
                j++;
                idx++;
            }
        }
        return v;
    }
};
