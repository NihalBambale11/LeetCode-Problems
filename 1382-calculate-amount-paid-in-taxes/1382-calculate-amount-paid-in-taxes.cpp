class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double taxes = 0.0;
        int prev = 0;
        int mini;
        for(int i = 0 ;i < brackets.size() ;i++){
            mini = min(brackets[i][0],income) - prev;
            if(mini <= 0){
                break;
            }
            taxes = taxes + (mini * (brackets[i][1]/100.0));

            prev = brackets[i][0];
        }

        return taxes;
    }
};