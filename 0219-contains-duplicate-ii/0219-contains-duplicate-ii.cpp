class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int diff ;
        // for(int i = 0; i < nums.size() ;i++){
        //     for(int j = i+1;j < nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //             diff =abs(i-j);
        //             if(diff <= k){
        //                 return true;
        //             }
        //             else{
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return false;
        
        // using map
        
        unordered_map<int,int> mp;
        
        for(int i = 0 ; i < nums.size() ; i++){
            int curr = nums[i];
            if(mp.find(curr) != mp.end()){
                int lastindex = mp[curr];
                
                if(abs(i - lastindex) <= k){
                    return true;
                }
            }
            
            mp[curr] = i;
        }
        
        
        return false;
    }
};