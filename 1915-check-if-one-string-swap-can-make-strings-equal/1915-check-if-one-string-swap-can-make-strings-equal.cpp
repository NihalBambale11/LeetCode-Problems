class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2){
            return true;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        vector<int> v;

        for(int i = 0; i < s1.size() ; i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;

            if(s1[i] != s2[i]){
                v.push_back(i);
            }
            if(v.size() > 2){
                return false;
            }
        }

        if(mp1 != mp2){
            return false;
        }

        if(v.size() == 2 && s1[v[0]] == s2[v[1]] && s1[v[1]] == s2[v[0]]){
            return true;
        }
        return false;
    }
};