class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int ,int> mp;
        for(int x : arr){
            mp[x]++;
        }
        int size = arr.size();
        
        vector<int> v;
        for(auto x : mp){
            v.push_back(x.second);
        }
        
        sort(v.begin(),v.end());
        
        int res = 0;
        int i = v.size()-1;
        int count = 0;
        while(res < size/2 ){
            count++;
            res = res + v[i];
            i--;
        }
        return count;
    }
};