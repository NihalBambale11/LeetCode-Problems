class Solution {
public:
    int countWords(string s){
        return count(s.begin(),s.end(),' ') + 1;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int> mp;
        int count = 0;
        for(int i = 0 ; i < senders.size() ; i++){
            mp[senders[i]] +=countWords(messages[i]);
        }

        int maxi = 0;
        string s;
        for(auto x : mp){
            int templen = x.second;
            if(maxi < templen || (maxi == templen && x.first > s )){
                maxi = templen;
                s = x.first;
            }
            
        }
        return s;
    }
};