class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        deque<int> dq;
        vector<int> seen;
        vector<int> ans;
        int k ;
       
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] != -1){
                dq.push_front(nums[i]);
                k = 0;
            }
            else if(nums[i] == -1){
                k++;
                if( k > dq.size()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(dq[k-1]);
                    
                }
            }
        }
        return ans;
    }
};