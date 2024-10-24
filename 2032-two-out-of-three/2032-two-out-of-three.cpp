class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector<int>v;
        map<int ,int> mp;
        
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        set<int> s3(nums3.begin(),nums3.end());
        
        for(int x : s1){
            mp[x]++;
        }
        for(int y : s2){
            mp[y]++;
        }
        for(int z : s3){
            mp[z]++;
        }
        
        for(auto x : mp){
            if(x.second >= 2){
                v.push_back(x.first);
            }
        }
        return v;
    }
};