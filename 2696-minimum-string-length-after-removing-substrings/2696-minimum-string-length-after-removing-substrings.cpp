class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.length();i++){
            
            char x = s[i];
            if(st.empty()){
                st.push(x);
                continue;
            }
            
            if(x == 'B' && st.top() == 'A'){
                st.pop();
            }
            else if(x == 'D' && st.top() == 'C'){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        
        return st.size();
    }
};