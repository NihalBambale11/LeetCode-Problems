class Solution {
public:
    vector<int> frequencySort(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] == mp[b]) {
                return a > b; 
            }
            return mp[a] < mp[b]; 
        });

        return nums;
    }
};