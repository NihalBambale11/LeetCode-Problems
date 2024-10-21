class Solution {
public:
    string makeGood(string s) {
        stack<char> ss;
        for(int i = 0 ; i < s.length() ; i++){
            if( !ss.empty() && ((isupper(ss.top()) && islower(s[i]) && tolower(ss.top()) == s[i] ) || (islower(ss.top()) && isupper(s[i]) && (ss.top()) == tolower(s[i]) ))){
                ss.pop();
            }
            else{
                ss.push(s[i]);
            }
        }
        
        string str = "";
        
        if(ss.empty()){
           return ""; 
        }
        else{
            while(!ss.empty()){
                str = str + ss.top();
                ss.pop();
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};