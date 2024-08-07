class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> copy  = words;
        for(int i = 0 ; i <  words.size() ; i++){
            reverse(words[i].begin(),words[i].end());
            if(words[i] == copy[i]){
                return words[i];
            }
            
        }
        return "";
    }
};