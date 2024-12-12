class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mp;
        
        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        
        vector<int> v;
        int Xor = 0;
        for(auto x : mp){
            if(x.second == 2){
                Xor = Xor ^ x.first;
            }
        }
        return Xor;
    }
};