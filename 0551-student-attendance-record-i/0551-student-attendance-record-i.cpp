class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;
        
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == 'A'){
                countA++;
            }
        }
        
        if(countA >= 2){
            return false;
        }
        
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'L'){
                if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                    return false;
                }
            }
        }
        return true;
    }
};