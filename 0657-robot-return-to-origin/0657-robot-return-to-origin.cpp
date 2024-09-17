class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for(char ch : moves){
            if(ch == 'U'){
                x = x + 1;
            }
            else if(ch == 'D'){
                x = x -1;
            }
            else if(ch == 'L'){
                y = y -1;
            }
            else if(ch == 'R'){
                y = y + 1;
            }
        }
        if(x == 0 && y == 0){
            return true;
        }
        return false;
    }
};