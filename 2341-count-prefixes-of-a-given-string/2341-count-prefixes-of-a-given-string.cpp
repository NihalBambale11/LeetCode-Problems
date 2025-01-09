class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for(int i = 0; i < words.size() ;i++){
            string temp = s.substr(0,words[i].length());
            if(temp ==  words[i]){
                count++;
            }
        }
        return count;
    }
};