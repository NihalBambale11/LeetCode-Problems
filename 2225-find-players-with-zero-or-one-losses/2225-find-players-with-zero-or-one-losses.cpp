class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp1;
        map<int,int> mp2;
        
        for(auto x : matches){
            mp1[x[0]]++;
            mp1[x[1]]++;
            
            mp2[x[1]]++;
        }
        
        vector<int> v1 , v2;
        
        for(auto y : mp1){
            if(mp2.find(y.first) == mp2.end()){
                v1.push_back(y.first);
            }
            else if(mp2[y.first] == 1){
                v2.push_back(y.first);
            }
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        return {v1,v2};
        
        
//         map<int, int> loseCount; 
//     map<int, int> winCount;  

//     for (const auto& match : matches) {
//         int winner = match[0];
//         int loser = match[1];

//         winCount[winner]++;
//         winCount[loser]++;  

//         loseCount[loser]++;
//     }

//     vector<int> noLossPlayers, oneLossPlayers;

//     for (const auto& player : winCount) {
//         int playerID = player.first;
//         if (loseCount.find(playerID) == loseCount.end()) {
//             noLossPlayers.push_back(playerID);
//         } 
//         else if (loseCount[playerID] == 1) {
//             oneLossPlayers.push_back(playerID);
//         }
//     }

//     sort(noLossPlayers.begin(), noLossPlayers.end());
//     sort(oneLossPlayers.begin(), oneLossPlayers.end());

//     return {noLossPlayers, oneLossPlayers};
    }
};