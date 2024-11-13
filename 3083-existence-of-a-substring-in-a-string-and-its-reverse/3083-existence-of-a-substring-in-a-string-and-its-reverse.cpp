class Solution {
public:
    bool isSubstringPresent(string s) {
        map<string , bool> mp;
        for(int i = 0 ; i < s.length() ; i++){
            mp[s.substr(i,2)] = true;
        }
        
        reverse(s.begin() ,s.end());
        
        for(int i = 0 ; i < s.length()-1 ; i++){
            if(mp[s.substr(i,2)]){
                return true;
            }
        }
        return false;
    }
};