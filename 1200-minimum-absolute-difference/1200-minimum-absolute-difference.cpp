class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int mini = INT_MAX;
        sort(arr.begin(),arr.end());
        vector<vector<int>> v;
        
        for(int i = 1 ; i < arr.size() ; i++){
            int diff = arr[i] - arr[i-1];
            mini = min(mini,diff);
        }
        
        for(int i = 1; i < arr.size() ; i++){
            if(arr[i] - arr[i-1] == mini){
                v.push_back({arr[i-1],arr[i]});
            }
        }
        return v;
    }
};