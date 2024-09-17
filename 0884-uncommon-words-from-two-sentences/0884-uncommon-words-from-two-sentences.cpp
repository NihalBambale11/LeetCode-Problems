class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp;
        
        string str = "";
        
        for(char x : s1){
            if(x != ' '){
                str = str + x;
            }
            else {
                mp[str]++;
                str = "";
            }
        }
        
        if (!str.empty()) { 
            mp[str]++;
        }
        
        str = "";
        for(char y : s2){
            if(y != ' '){
                str = str + y;
            }
            else {
                mp[str]++;
                str = "";
            }
        }
        if (!str.empty()) { 
            mp[str]++;
        }        
        vector<string> v;
        for(auto z : mp){
            if(z.second == 1){
                v.push_back(z.first);
            }
        }
        return v;
    }
};