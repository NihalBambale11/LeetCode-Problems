class Solution {
public:
    int maxDifference(string s) {
        map<char,int> mp;
        for(char x : s){
            mp[x]++;
        }

        int maxiodd = 0;
        int minieven = INT_MAX;
        for(auto x : mp){
            if((x.second) % 2 == 0){
                minieven = min(minieven , x.second);
            }
            else{
                maxiodd = max(maxiodd,x.second);
            }
        }

        return maxiodd - minieven;
    }
};