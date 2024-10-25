class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count = 0;
        int maxi = 0;
        map<int,int> mp;
        
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
        
        for(auto x : mp){
            if(x.first == x.second){
                count++;
                maxi = max(maxi,x.first);
            }
        }
        if(count == 0){
            return -1;
        }
        return  maxi;
        
    }
};