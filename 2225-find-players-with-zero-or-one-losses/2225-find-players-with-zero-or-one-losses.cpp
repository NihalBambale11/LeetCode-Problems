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
        
        

    }
};