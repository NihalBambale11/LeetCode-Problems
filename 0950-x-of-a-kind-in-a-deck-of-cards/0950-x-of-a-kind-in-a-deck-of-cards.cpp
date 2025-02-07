class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < deck.size();i++){
            mp[deck[i]]++;
        }

        //int x = mp[deck[0]];
        int gcdval = 0;
        for(auto y : mp){
            gcdval = gcd(gcdval,y.second);
        }
        return gcdval >= 2;
    }
};