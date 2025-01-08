class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count= 0;
        int x,y;
        for(int i = 0 ; i < 8 ; i++){
            for(int j = 0 ; j< 8 ; j++){
                if(board[i][j]=='R'){
                    x = i;
                    y = j;
                }
            }
        }

        //right of rook
        for(int i  = y; i < 8 ; i++){
            if(board[x][i] == 'p'){
                count++;
                break;
            }
            else if(board[x][i] == 'B'){
                break;
            }
        }

        //left of rook
        for(int i = y ; i >= 0 ; i--){
            if(board[x][i] == 'p' ){
                count++;
                break;
            }
            else if(board[x][i] == 'B'){
                break;
            }
        }

        //bottom of rook
        for(int i = x ; i < 8 ; i++){
            if(board[i][y] == 'p'){
                count++;
                break;
            }
            else if(board[i][y] == 'B'){
                break;
            }
        }

        //top of rook
        for(int i = x ; i >= 0 ; i--){
            if(board[i][y] == 'p'){
                count++;
                break;
            }
            else if(board[i][y] == 'B'){
                break;
            }
        }
        return count;
    }
};