class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int rem = 0;
        int pairs = 0;
        vector<int> v;
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second%2==1) {
                rem++;
            }
            pairs+=it.second/2;
        }
        
        v.push_back(pairs);
        v.push_back(rem);
        
        return v;
    }
};