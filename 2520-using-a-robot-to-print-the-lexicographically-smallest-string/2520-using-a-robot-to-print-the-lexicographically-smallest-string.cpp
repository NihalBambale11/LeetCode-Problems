class Solution {
public:
    string robotWithString(string s) {
        map<char , int>  mp;
        for(char x : s){
            mp[x]++;
        }
        stack<char> st;
        string str = "";
        for(int ch : s){
            st.push(ch);
            mp[ch]--;
            if(mp[ch] == 0){
                mp.erase(ch);
            }

            while(!st.empty() && (st.top() <= mp.begin()->first)){
                str.push_back(st.top());
                st.pop();
            }
        }

        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        return str;   
    }
};