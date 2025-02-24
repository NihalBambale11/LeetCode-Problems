class Solution {
public:
        bool anagram(string s1 ,string s2){
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            return s1 == s2;
        }
    vector<string> removeAnagrams(vector<string>& words) {


        vector<string> v;
        v.push_back(words[0]);
        for(int i = 1 ; i < words.size(); i++){


            if(!anagram(words[i],words[i-1])){
                v.push_back(words[i]);
            }
        }
        return v;
    }
};