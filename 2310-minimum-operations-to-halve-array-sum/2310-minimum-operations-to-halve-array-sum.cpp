class Solution {
public:
    int halveArray(vector<int>& nums) {
        long double sum = accumulate(nums.begin(),nums.end(),0.0);
        priority_queue<double> pq;

        for (int num : nums) {
            pq.push(static_cast<double>(num));
        }
        int count = 0;
        long double tempsum = sum;
        while(tempsum > sum/2.0 ){
            long double x = pq.top();
            pq.pop();
            x = x / 2.0;
            tempsum = tempsum - x;
            pq.push(x);
            count++;
        }
           return count;
    }
};