class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mp ;
        vector<int> v;
        for(vector<int> x : grid){
            for(int y : x){
                mp[y]++;
            }
        }
        int missing ;
        int repeated;
        for(auto m : mp){
            if(m.second > 1){
                repeated = m.first;
                break;
            }
        }
        
        
        for(auto u : mp){
            v.push_back(u.first);
        }
        
        
        //sort(v.begin(),v.end());
        for(int i = 1 ; i <= v.size() ; i++){
            if(v[i-1] != i){
                missing = i;
                break;
            }
        }
        return {repeated,missing};
    }
};