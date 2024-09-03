class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int p1 = 0;
        int p2 = 0;
        
        for(int i =0 ; i < player1.size(); i++){
            if((i > 0 && player1[i - 1] == 10) || (i > 1 && player1[i - 2] == 10)){
                p1 = p1 + player1[i]*2;
            }
            else{
                p1 = p1 + player1[i];
            }
        }
        
        for(int i =0 ; i < player2.size(); i++){
            if((i > 0 && player2[i - 1] == 10) || (i > 1 && player2[i - 2] == 10)){
                p2 = p2 + player2[i]*2;
            }
            else{
                p2 = p2 + player2[i];
            }
        }
        
        if(p1 > p2){
            return 1;
        }
        else if(p2 > p1){
            return 2;
        }
        else{
            return 0;
        }
    }
};