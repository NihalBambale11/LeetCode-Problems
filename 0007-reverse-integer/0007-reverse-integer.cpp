class Solution {
public:
    int reverse(int x) {
        long long temp = x;
        long long rev = 0;
        long long rem ;
        

        
        if(temp < 0){
            temp = temp * (-1);
        }
        while(temp != 0){
            rem = temp % 10;
            rev = (rev*10) + rem;
            temp = temp / 10;
            
            if(rev>INT_MAX)
            {
                return 0;
            }
            
        }
        
        
        if(x < 0){
            return -rev;
        }
        else{
            return rev;
        }
    }
};