class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int max = 0;
        for(int i = 0 ;  i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        
        for(auto m : mp){
            if(m.second > max){
                max = m.second;
            }
        }
        
        int x = 0;
        for(auto m : mp){
            if(m.second == max){
                x = x + m.second;
            }
        }
        return x;
    }
};