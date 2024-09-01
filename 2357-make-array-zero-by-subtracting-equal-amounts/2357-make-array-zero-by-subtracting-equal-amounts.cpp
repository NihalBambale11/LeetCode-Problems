class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> v;
        for(int x : nums){
            if(x != 0){
                v.insert(x);
            }
        }
        return v.size();
    }
    
};