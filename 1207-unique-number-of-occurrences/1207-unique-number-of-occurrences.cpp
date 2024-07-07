class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i = 0 ; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        
        for(auto k : mp){
            for(auto v : mp){
                if(k.first != v.first && k.second == v.second){
                    return false;
                }
            }
        }
        return true;
    }
};