class Solution {
public:
    int maxDifference(string s) {
        map<char ,int> mp;
        int emini = INT_MAX;
        int omaxi = 0;
        for(int i = 0 ; i < s.length(); i++){
            mp[s[i]]++;
        }

        for(auto x : mp){
            if(x.second % 2 == 0){
                emini = min(emini,x.second);
            }
            else{
                omaxi = max(omaxi,x.second);
            }
        }
        return (omaxi-emini);
    }
};