class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long i = 0;
        long long j = 0;
        long long sum =0;
        long long count= 0;

        while(j < nums.size()){
            sum = sum + nums[j];
            while(i <= j && sum * (j-i+1) >= k){
                sum = sum - nums[i];
                i++;
            }

            count = count + (j-i+1);
            j++;
        }
        return count;
    }
};