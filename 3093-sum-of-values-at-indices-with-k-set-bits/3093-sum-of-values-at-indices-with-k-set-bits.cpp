class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        vector<int> v;
        int sum= 0;
        for(int i = 0 ; i < nums.size() ;i++){
            int ones = 0;
            int bits = i;
            while(bits != 0){
                if(1 & bits){
                    ones++;
                }
                bits = bits >> 1;
            }

            if(ones == k){
                v.push_back(i);
            }
        }

        for(int i = 0; i < v.size() ;i++){
            sum = sum + nums[v[i]];
        }
        return sum;
    }
};