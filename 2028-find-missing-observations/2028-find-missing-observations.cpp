class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum =0 ;
        for(int x : rolls){
            sum = sum + x;
        }
        
        int rsum = mean * (n + rolls.size()) - sum;
        if(rsum > 6 * n || rsum < n){
            return {};
        }
        
        int m  = rsum / n;
        int o = rsum % n;
        
        vector<int> ans(n,m);

        for(int i = 0 ; i < o ; i++ ){
            ans[i]++;
        }
        return ans;
    }
};