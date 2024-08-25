class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int R = 0;
        int L = 0;
        for(int i = 0 ;  i < s.length(); i++){
            if(s[i] == 'L'){
                L++;
            }
            else{
                R++;
            }
            if(R == L){
                count++;
            }
        }
        return count++;
    }
};