class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1;
        map<char,int> mp2;
        
        for(char x : ransomNote){
            mp1[x - 'a']++;
        }
        
        for(char y : magazine){
            mp2[y - 'a']++;
        }
        
        for(auto x : mp1){
            char ch = x.first;
            int count = x.second;
            
            if(mp2[ch] < count){
                return false;
            }
        }
        return true;
    }
};