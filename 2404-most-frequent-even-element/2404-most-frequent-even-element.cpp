class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        int even = -1;
        int maxi = 0 ;
        for(auto x : mp){
            if(x.first % 2 == 0){
                if(x.second > maxi){
                    maxi = max(x.second,maxi);
                    even = x.first;
                }
                else if(x.second == maxi){
                    even = min(even,x.first);
                }
            }

        }
        return even;
    }
};