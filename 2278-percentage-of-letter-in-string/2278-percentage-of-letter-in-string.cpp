class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char ,int> mp;
        
        for(char x : s){
            mp[x]++;
        }
        
        if(mp.find(letter) != mp.end()){
            return (mp[letter] * 100) / s.size();
        }
        
        return 0;
        
    }
};