class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool flag = false;
        if(sentence[0] == sentence[sentence.length()-1]){
            flag = true;
        }

        for(int i = 0 ; i < sentence.length() ; i++){
            if(sentence[i] == ' '){
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }
        }

        if(flag){
            return true;
        }
        return false;
    }
};