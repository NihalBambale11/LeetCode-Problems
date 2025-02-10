class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        bool flag = false;
        for(int i = 0 ; i < s.length(); i++){
            if(isdigit(s[i])){
                st.pop();
                flag = true;
            }
            else{
                st.push(s[i]);
            }
        }

        if(!flag){
            return s;
        }

        string str = "";
        while(!st.empty()){
            str = str + st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());
        return str;
    }
};