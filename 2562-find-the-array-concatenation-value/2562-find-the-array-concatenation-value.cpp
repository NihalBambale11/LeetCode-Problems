class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concate = 0;
        int i = 0 ; 
        int j = nums.size()-1;
        
        while(i < j){

            string merge = to_string(nums[i]) + to_string(nums[j]);
            concate  = concate  + stoll(merge);
            i++;
            j--;

        }
        
            if(i == j){
                concate = concate + nums[i];
            }

        
        return concate;
    }
};