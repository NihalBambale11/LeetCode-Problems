class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto x : arr){
            mp[x]++;
        }
        string res ="";
        int count = 0;
        for(auto x : arr){
            if(mp[x] == 1){
                res = x;
                count++;
            }
            if(count == k){
                return res;
            }
        }

        return "";
    }
};