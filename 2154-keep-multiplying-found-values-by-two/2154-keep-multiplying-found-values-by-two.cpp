class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s(nums.begin(),nums.end());
        
        for(int x : s){
            if(x == original){
                original = original * 2;
            }
        }
        return original;
    }
};