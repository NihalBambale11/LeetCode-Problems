class Solution {
public:
    int digitSum(int n ){
        int rem ;
        int sum = 0;

        while(n != 0){
            rem = n % 10;
            sum = sum + rem;
            n = n /10;    
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
        int maxi = 0;
        for(int i = 1 ; i <= n ;i++){
            int sum = digitSum(i);
            mp[sum]++;
            maxi = max( mp[sum], maxi);
        }

        int count = 0;
        for(auto x : mp){
            if(maxi == x.second){
                count++;
            }
        }
        return count;
    }
};