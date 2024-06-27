class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> v;
        map<int,string> mp;
        
        for(int i = 0 ; i < heights.size() ; i++){
            mp[heights[i]] = names[i];
        }
        
        sort(heights.rbegin() , heights.rend());
        
        for(int i = 0 ; i < heights.size() ; i++){
            v.push_back(mp[heights[i]]);
        }
        
        return v;
    }
};