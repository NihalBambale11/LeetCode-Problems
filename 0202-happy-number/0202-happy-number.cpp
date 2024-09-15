class Solution {
public:
    bool isHappy(int n) {
        int rem;
        while( n > 9){
            int temp = n;
            int sum = 0;
            while(temp){
                rem = temp % 10;
                sum = sum + (rem*rem);
                temp = temp / 10;
            }
            
            n = sum;
        }
        if(n == 1 || n == 7){
            return true;
        }
        return false;
    }
};