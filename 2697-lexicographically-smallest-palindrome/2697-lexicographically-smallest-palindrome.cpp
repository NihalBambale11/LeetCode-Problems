class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0 ;
        int j = s.length()-1;
        for(int x  = 0 ; i < j ; x++){
            if(s[i] != s[j]){
                if(s[i] > s[j]){
                    s[i] = s[j];
                }
                else{
                    s[j] = s[i];
                }
            }
            else{
                i++;
                j--;
            }
            
        }
        return s;
    }
};