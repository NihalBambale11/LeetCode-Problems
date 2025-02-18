class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char,int> mp2;
        map<int,int> mp1;

        for(auto x : suits){
            mp2[x]++;
        }

        for(auto x : ranks){
            mp1[x]++;
        }

        if(mp2[suits[0]] == 5){
            return "Flush";
        }
        for(int i = 0 ; i < ranks.size() ;i++){
            if(mp1[ranks[i]] >= 3 ){
                return "Three of a Kind";
            }
        }

        for(int i = 0 ; i < ranks.size();i++){
            if(mp1[ranks[i]] == 2){
                return "Pair";
            }
        }

        return "High Card";
    }
};