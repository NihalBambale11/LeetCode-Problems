class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        for(int i = 0 ; i < s2.length();i++){
            for(int j = i+1 ; j < s2.length();j++){
                if(j-i == 2){
                    if(s1[i] != s2[i] && s1[j] != s2[j])
                    swap(s2[i],s2[j]);
                }
            }
        }
        if(s1 == s2){
            return true;
        }
        return false;
    }
};