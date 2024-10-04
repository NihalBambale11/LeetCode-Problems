class Solution {
public:
    int minElement(vector<int>& nums) {
        int rem;
        vector<int> v;
        
        for(int i = 0; i< nums.size() ; i++){    
            int sum = 0;
            
            while(nums[i] > 0){
                rem = nums[i] % 10;
                sum = sum +rem;
                nums[i] = nums[i] /10;
                
            }
            v.push_back(sum);
            
        }
        
        int mini = *min_element(v.begin(),v.end());
        
        return mini;
    }
};