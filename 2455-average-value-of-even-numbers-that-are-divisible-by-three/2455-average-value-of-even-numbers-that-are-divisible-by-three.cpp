class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> v;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
                v.push_back(nums[i]);
            }
        }
        int sum =0;
        for(int i = 0 ; i < v.size() ; i++){
            sum = sum + v[i];
        }
        
        if(v.size() == 0){
            return 0;
        }
        
        double avg = (sum)/v.size();
        return (int)avg;
        
        

    }
};