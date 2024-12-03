class Solution {
public:
    int count(int n) {
        int c = 0;
        while (n > 0) {
            if (n % 2 == 1) { 
                c++;
            }
            n = n / 2; 
        }
        return c;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> mp;
        
        for (int i = 0; i < arr.size(); i++) {
            mp[count(arr[i])].push_back(arr[i]);
        }
        
        vector<int> v;
        for (auto x : mp) {
            auto y = x.second;
            
            sort(y.begin(), y.end());
            for (auto i : y) {
                v.push_back(i);
            }
        }
        
        return v;
    }
};
