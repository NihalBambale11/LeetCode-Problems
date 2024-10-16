class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> ss;
        char ch;
        for(int i = 0; i < s.length();i++){
            if(ss.find(s[i]) != ss.end()){
                ch = s[i];
                break;
            }
            ss.insert(s[i]);

        }
        return ch;
    }
};