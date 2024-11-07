class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin() ,tokens.end());
        int maxi = 0;
        int score = 0;
        int i = 0;
        int j = tokens.size()-1;
        while(i <= j){
            if(power >= tokens[i]){
                power = power - tokens[i];
                i++;

                score++;
               
                maxi = max(score,maxi);
            }
            else if(score > 0){
                power = power + tokens[j];
                score--;
                j--;
            }
            else{
                break;
            }
        }
        return maxi;
    }
};