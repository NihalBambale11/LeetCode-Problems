class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int diff = 0;
        for(int i = 0 ; i<s.length()-1;i++){
            diff = abs(s[i] - s[i+1]);
            sum = sum + diff;
        }
        return sum;
    }
};