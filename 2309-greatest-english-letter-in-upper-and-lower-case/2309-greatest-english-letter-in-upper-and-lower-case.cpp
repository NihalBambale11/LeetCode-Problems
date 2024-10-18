class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> set1;
        set<char> set2;
        
        for(int i = 0;i < s.length();i++){
            if(s[i] >= 'a' &&  s[i] <= 'z'){
                set1.insert(s[i]);
            }
            else{
                set2.insert(s[i]);
            }
        }
        
        string ans = "";
        for(auto it = set2.rbegin(); it != set2.rend(); it++){
            if(set1.find(tolower(*it)) != set1.end()){
                ans.push_back(*it);
                return ans;
            }
        }
        return ans;

    }
};