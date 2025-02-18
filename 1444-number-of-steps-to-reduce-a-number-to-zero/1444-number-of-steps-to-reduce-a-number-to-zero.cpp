class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        return steps(num, count);
    }

    int steps(int nums ,int count){
        if(nums == 0){
            return count;
        }
        if(nums % 2 == 0){
            return steps(nums/2 , count+1);
        }
        return steps(nums-1,count+1);
    }
};