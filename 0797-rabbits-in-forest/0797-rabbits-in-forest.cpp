class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(int x : answers){
            mp[x]++;
        }

        int ans = 0;
        for(auto x : mp){
            ans = ans + ceil((double)x.second / (x.first+1)) * (x.first+1);
        }
        return ans;
    }
};