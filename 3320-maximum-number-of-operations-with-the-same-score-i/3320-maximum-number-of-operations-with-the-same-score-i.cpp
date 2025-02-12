class Solution {
public:
    int maxOperations(vector<int>& num) {
        int prevsum ;
        int sum ;
        deque<int> nums(num.begin(),num.end());
        
        int first = nums.front();
        nums.pop_front();
        int second = nums.front();
        nums.pop_front();
        prevsum = first + second;
        int count = 0;

        while(nums.size() >= 2){
            first = nums.front() ;
            nums.pop_front();

            second = nums.front(); 
            nums.pop_front();

            sum = first + second;

            if(sum != prevsum){
                break;
            }
            else{
                count++;
                prevsum = sum;
            }
            
        }
        return count+1;
    }
};