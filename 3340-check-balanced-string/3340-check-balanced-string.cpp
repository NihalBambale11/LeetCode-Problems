class Solution {
public:
    bool isBalanced(string num) {
        int esum = 0;
        int osum = 0;
        
        for(int i = 0 ; i < num.length() ; i++){
            if(i % 2 == 0){
                esum = esum + (num[i] - '0');
            }
            else{
                osum = osum + (num[i] - '0');
            }
            
        }
        
        return esum == osum ? true : false;
    }
};