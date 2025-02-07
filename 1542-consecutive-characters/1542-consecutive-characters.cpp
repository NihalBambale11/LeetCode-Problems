class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int maxi = 1;
        for(int i = 1 ; i < s.length() ; i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                maxi = max(maxi,count);
                count = 1;
            }
        }
        maxi = max(maxi,count);
        return maxi;
    }
};