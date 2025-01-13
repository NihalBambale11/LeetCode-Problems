class Solution {
public:
    int minimumLength(string s) {
        map<char ,int> mp;
        for(int i = 0 ; i < s.length();i++){
            mp[s[i]]++;
        }

        int sum = 0;
        for(auto x : mp){
            if(x.second % 2 ==  0){
                sum = sum + 2;
            }
            else{
                sum   = sum + 1;
            }
        }

        return sum;

    }
};