class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v;
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto x : mp){
            if(x.second == 2){
                v.push_back(x.first);
                break;
            }
            
        }
        
        
        for(int i = 1 ; i < nums.size()+1 ; i++){
            if(mp[i] == 0){
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};