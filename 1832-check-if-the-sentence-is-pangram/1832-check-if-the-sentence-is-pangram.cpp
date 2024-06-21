class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        
        for(int i = 0 ; i < sentence.length(); i++){
            mp[sentence[i]]++;
        }
        
        if(mp.size() == 26){
            return true;
        }
        else{
            return false;
        }
    }
};