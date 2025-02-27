class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> index ;
        vector<int> v;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == x){
                index.push_back(i);
            }
        }

        unordered_map<int,int> mp;
        for(auto y : nums){
            if(y == x ){
                mp[y]++;
            }
        }

        // if(mp[x] == 0){
        //     return {-1};
        // }

       // int j = 0;
        for(int i = 0 ; i < queries.size() ;i++){
            if(mp[x] >= queries[i]){
                v.push_back(index[queries[i]-1]);
                //j++;
            }
            else{
                v.push_back(-1);
            }
        }
        return v;

    }
};