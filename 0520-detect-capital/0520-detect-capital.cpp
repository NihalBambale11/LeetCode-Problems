class Solution {
public:
    bool detectCapitalUse(string word) {
       int count = 0 ;
        if(word[0] >= 'A' && word[0] <= 'Z'){
            for(int i = 1 ; i < word.size() ; i++){
                if(word[i] >= 'A' && word[i] <= 'Z'){
                    count++;
                }
            }
            
            if(count==word.size()-1 || count == 0){
                return true;
            }
        }
        else{
            for(int i = 1 ; i < word.size() ; i++){
                if(word[i] >= 'a' && word[i] <= 'z'){
                    count++;
                }
            }
            if(count==word.size()-1){
                return true;
            }
        }
        return false;
    }
};