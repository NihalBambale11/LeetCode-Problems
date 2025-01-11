class Solution {
public:
    bool canConstruct(string s, int k) {
        int count = 0;
        map<int,int> mp;
        if(s.size() == k){
            return true;
        }
        if(s.size() < k){
            return false;
        }

        for(int i = 0 ; i < s.size();i++){
            mp[s[i]]++;
        }
        for(auto it = mp.begin();it != mp.end();it++){
            if(it->second % 2 == 1){
                count++;
            }
        }
        if(count > k){
            return false;
        }

        return true;
    }
};