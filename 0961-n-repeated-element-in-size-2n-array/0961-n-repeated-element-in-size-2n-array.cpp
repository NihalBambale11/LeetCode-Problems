class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mp;
        
        for(int i = 0;  i < nums.size();i++){
            mp[nums[i]]++;
        }
        int y ;
        for(auto x : mp){
            if(x.second != 1){
               y =  x.first;
                break;
            }
        }
        return y;
    }
};