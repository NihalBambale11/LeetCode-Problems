class Solution {
public:
    string toLowerCase(string s) {
        string str = "";
        for(char ch : s){
            if(ch >= 'A' && ch <= 'Z'){
                ch = ch + 32;
                str = str + ch;
            }
            else{
                str = str + ch;
            }
        }
        return str;
    }
};