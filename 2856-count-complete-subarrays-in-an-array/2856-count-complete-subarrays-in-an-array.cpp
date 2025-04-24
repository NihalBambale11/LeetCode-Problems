class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        // new way to calculate the size of set
        int k = unordered_set<int>(nums.begin(),nums.end()).size();

        int i = 0;
        int j = 0;
        unordered_map<int ,int> mp;

        int count = 0;

        while(j < nums.size()){
            mp[nums[j]]++;

            while(mp.size() == k){
                count = count + nums.size() - j;
                mp[nums[i]]--;
                if(mp[nums[i]] == 0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return count;
    }
};