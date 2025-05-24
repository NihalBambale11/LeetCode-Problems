class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        for(int i = 0 ;i<words.size();i++){
            for(char y : words[i]){
                if(y == x){
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};