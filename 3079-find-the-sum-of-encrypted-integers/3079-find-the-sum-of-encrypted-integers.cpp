class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
       int sum = 0;
        for(int x : nums){
             int maxx=  0;
             int count=0;
        
             int ans = 0 ;
             int rem ;
            while(x){
                rem = x % 10;
                maxx = max(rem,maxx);
                x = x / 10;
                count++;
                
            }
            
            while(count){
                ans = (ans * 10) + maxx;
                count--;
            }
            
            sum = sum + ans;
        }
        return sum;
    }
};