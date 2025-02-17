class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;

        for (int num : nums) {
            s.insert(num);  
            int rev = 0;
            int temp = num;
            
            while (temp > 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }

            s.insert(rev); 
        }
        
        return s.size();
    }
};
