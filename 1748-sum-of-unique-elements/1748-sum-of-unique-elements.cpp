class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp ;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        
        int sum = 0;
        for(auto p : mp){
            if(p.second == 1){
                sum = sum + p.first;
            }
        }
        return sum;
    }
};