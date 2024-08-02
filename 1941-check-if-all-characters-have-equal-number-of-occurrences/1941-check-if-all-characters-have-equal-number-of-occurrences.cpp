class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char ,int> mp;
        for(int i = 0; i < s.length() ;i++){
            int num = s[i] -'a';            
            mp[num]++;
        }
          


        int temp = mp[s[0] - 'a'];
        for(int i = 0 ; i < 26 ; i++){
            if(temp == mp[i] || mp[i] == 0){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        
        
    }
};