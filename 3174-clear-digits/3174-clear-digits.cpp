class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.length() ; i++){
            if(isdigit(s[i])){
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        if(s.empty()){
            return "";
        }
        
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        
    reverse(res.begin(),res.end());
        return res;

    }
};