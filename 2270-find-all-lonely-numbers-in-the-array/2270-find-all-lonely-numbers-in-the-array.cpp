class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }

        vector<int> v;
        for(auto y : nums){
            if(mp[y] <=  1 && mp[y+1] == 0 && mp[y-1] == 0){
                v.push_back(y);
            }
        }
        return v;  
    }
};