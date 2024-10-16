class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        for(int i = 0; i < s.length() ; i++){
            if(!st.empty() && s[i] == st.top()){
                st.pop();
                
            }
            else{
                st.push(s[i]);
            }
        }
        string str  = "";
        while(!st.empty()){
            char x = st.top();
            str  =str + x;
            st.pop();
        }
        
        reverse(str.begin(),str.end());
        return str;
    }
};