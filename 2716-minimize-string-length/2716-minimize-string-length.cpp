class Solution {
public:
    int minimizedStringLength(string s) {
        map<char,int> mp;
        for(char x : s){
            mp[x]++;
        }
        
        int sum=0;
        int diff;
        for(auto x : mp){
            if(x.second > 1){
             diff = x.second - 1;
             int ans = x.second - diff;
             mp[x.first] = ans;
            }
        }
        
        for(auto x : mp){
            sum = sum + x.second;
        }
        return sum;
    }
};