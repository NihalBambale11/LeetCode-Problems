class Solution {
public:
    
    int firstOccurence(vector<int> nums , int target){
        int low = 0;
        int  high = nums.size()-1;
       int v = nums.size();
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                v = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return v;
    }
    
    
        int lastOccurence(vector<int> nums , int target){
        int low = 0;
        int  high = nums.size()-1;
        int v = nums.size();
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                v = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
         return v;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
      int first = firstOccurence(nums,target);
      if(first == nums.size() || nums[first] != target){ 
          return {-1, -1};
      }
      int last = lastOccurence(nums,target);
      return {first,last};
    }
};