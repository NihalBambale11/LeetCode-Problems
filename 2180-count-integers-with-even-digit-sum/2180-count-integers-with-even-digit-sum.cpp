class Solution {
public:
    int countEven(int num) {
        int rem;
        int count=0;
        
        for(int i = 1 ; i <= num ; i++){
            int x = i ;
            int sum = 0;
            while(x != 0){
                rem = x % 10;
                sum = sum + rem;
                x = x / 10;
            }
            if(sum % 2 == 0){
                count++;
            }
        }
        return count;
    }
};