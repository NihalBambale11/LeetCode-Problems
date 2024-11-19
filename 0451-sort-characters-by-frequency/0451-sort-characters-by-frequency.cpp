class Solution {
public:
    string frequencySort(string s) {
         int n=s.length();
        priority_queue<pair<int,char>> maxh;
        unordered_map<char,int> mpp;
        for(auto ch:s){
            mpp[ch]++;
        }
       for (auto it : mpp) {
            maxh.push({it.second, it.first});
        }
        string ans="";
        while(maxh.size()>0){
            int freq = maxh.top().first;
            char ch = maxh.top().second;
            for (int i = 0; i < freq; ++i) {
                ans += ch;
            }
            maxh.pop();
        }
        return ans;
    }
};