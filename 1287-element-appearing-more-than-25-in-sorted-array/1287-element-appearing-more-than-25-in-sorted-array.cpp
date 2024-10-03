class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        for(int x : arr){
            mp[x]++;
        }
        
        int maxi = 0;
        int num ;
        for(auto x : mp){
            if(x.second > maxi){
                maxi = x.second;
                num = x.first;
            }
        }
        return num;
    }
};