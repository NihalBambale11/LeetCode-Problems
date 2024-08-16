class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(int & i : arr1) mp[i]++;
        vector<int> ans,vp;
        for(int & i : arr2){
            while(mp[i]>0){
                ans.push_back(i);
                mp[i]--;
            }
        }
        for(auto& i : mp){
            while(i.second>0){
                vp.push_back(i.first);
                i.second--;
            }
        }
        sort(vp.begin(),vp.end());
        for(int & i : vp) ans.push_back(i);
        return ans;
    }
};