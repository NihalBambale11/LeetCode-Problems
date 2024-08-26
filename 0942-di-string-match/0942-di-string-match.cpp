class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0;
        vector<int> v;
        int j = s.length();
        for(int x = 0; x < s.length() ; x++){
            if(s[x] == 'I'){
                v.push_back(i);
                i++;
            }
            else{
                v.push_back(j);
                j--;
            }
            
        }
        v.push_back(i);
        return v;
    }
};