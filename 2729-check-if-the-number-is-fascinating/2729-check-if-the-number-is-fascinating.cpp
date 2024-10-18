class Solution {
public:
    bool isFascinating(int n) {
        int n2 = n * 2;
        int n3 = n * 3;
        
        string str = to_string(n) + to_string(n2) + to_string(n3);
        
        map<char ,int> mp;
        for(char x : str){
            mp[x]++;
        }
        
        for(auto x : mp){
            if(x.first == '0' || x.second > 1){
                return false;
            }
            
        }
        return true;
    }
};