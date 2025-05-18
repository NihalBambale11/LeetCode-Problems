class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char , int> mp;

        for(int i = 0; i< order.size();i++){
            mp[order[i]] = i;
        }
        vector<pair<int ,char>> v;
        for(char x : s){
            int in  = mp.count(x) ? mp[x] : INT_MAX;
            v.push_back({in,x});
        }

        sort(v.begin() , v.end());

        string str = "";
        for(auto x : v){
            str = str + x.second;
        }

        return str;
    }
};