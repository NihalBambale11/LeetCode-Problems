class Solution {
public:
    bool isValid(string s) {
        stack<char> sttackk;
        for(int i = 0 ; i < s.length() ; i++){
            char c = s[i];
            if(c == '(' || c == '{' || c == '['){
                sttackk.push(c);
            }
            else{
                if(!sttackk.empty()){
                    char x  = sttackk.top();
                    if((x == '(' && c == ')') || (x == '{' && c == '}') || (x == '[' && c == ']')){
                        sttackk.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
                    
                
            }
        }
        if(sttackk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};