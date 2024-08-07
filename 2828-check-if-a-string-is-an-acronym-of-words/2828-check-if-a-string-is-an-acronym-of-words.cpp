class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str = "";
        for(string x : words){
            str = str + x[0];
        }
        
        if(str == s){
            return true;
        }
        else{
            return false;
        }
    }
};