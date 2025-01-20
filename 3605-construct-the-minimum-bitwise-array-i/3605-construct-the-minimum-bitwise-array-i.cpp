class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> v(nums.size(),-1);
        for(int i = 0 ; i < nums.size() ; i++){
            int temp = nums[i];

            for(int j = 0 ; j < temp ; j++){
                if( ((j) | (j + 1)) == temp){
                    v[i] = j;
                    break;
                }
            }
        }
        return v;
    }
};