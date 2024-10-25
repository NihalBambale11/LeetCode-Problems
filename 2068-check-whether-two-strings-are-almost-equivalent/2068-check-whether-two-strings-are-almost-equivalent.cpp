class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int> mp1,mp2;
        
        for(char x : word1){
            mp1[x]++;
        }
        for(char y: word2){
            mp2[y]++;
        }
        
        for(char c = 'a'; c <= 'z'; ++c) {
            int freq1 = mp1[c];
            int freq2 = mp2[c]; 
            if (abs(freq1 - freq2) > 3) {
                return false;
            }
        }
        
        return true;
    }
};