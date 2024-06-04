class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int rem;
        int org = x ;
        while(x > 0){
            rem = x % 10;
            sum = sum + rem;
            x = x / 10;
        }
        if(org % sum == 0){
            return sum;
        }
        else{
            return -1;
        }
    }
};