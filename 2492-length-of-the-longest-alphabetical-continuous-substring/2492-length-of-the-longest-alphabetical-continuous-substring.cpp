class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int maxi = 1;

        for(int i = 1; i <= s.size() ; i++){
            if(s[i] == s[i-1]+1){
                count++;
                maxi = max(maxi , count);
            }
            else {
                count = 1;
            }
        }
        return maxi;
    }
};