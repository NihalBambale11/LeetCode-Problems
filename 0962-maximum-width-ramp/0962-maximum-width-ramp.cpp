class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
//         int ramp;
//         if(nums.empty()){
//             return 0;
//         }
//         int maxi = 0;
//         for(int i = 0; i < nums.size() ; i++){
//             for(int j = 0 ; j < nums.size();j++){
//                 if(i < j && nums[i] <= nums[j]){
//                     ramp = j - i;
//                     maxi = max(ramp,maxi);
                   
//                 }
//             }
//         }

//         return maxi;
        
        stack<int> s;
        
        for(int i = 0 ;i < nums.size() ; i++){
            if(s.empty() || nums[s.top()] > nums[i]){
                s.push(i);
            }
        }
        
        int maxi = 0;
        
        for(int j = nums.size()-1; j>= 0 ; j--){
            while(!s.empty() && nums[s.top()] <= nums[j]){
                 maxi = max(maxi,j - s.top());
                s.pop();
            }
        }
        return maxi;
    }
};