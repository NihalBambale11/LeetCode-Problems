class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp1;
        map<string,int>mp2;
        int count = 0;
        for(int i = 0 ; i<words1.size();i++){
            mp1[words1[i]]++;
        }
        
        for(int i = 0; i<words2.size();i++){
            mp2[words2[i]]++;
        }
        
        for(auto x : words1){
            if(mp1[x] == 1 && mp2[x] == 1){
                count++;
            }
        }
        return count;
    }
};