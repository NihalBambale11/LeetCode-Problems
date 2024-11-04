class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
       map<string, int> mp; int cnt(0);
        for(auto i: bannedWords) mp[i]++;
        for(auto str: message) if(mp[str] != 0) cnt++;
        return (cnt >= 2) ? true : false;
    }
};