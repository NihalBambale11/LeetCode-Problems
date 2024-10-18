class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> set;
        int count = 0;
        for(int i =0;i<words.size();i++){
            string str = words[i];
            string rev = str;
            reverse(rev.begin(),rev.end());
            if(set.contains(rev)){
                count++;
                set.erase(rev);
            }
            else set.insert(str);
        }
        return count;
    }
};