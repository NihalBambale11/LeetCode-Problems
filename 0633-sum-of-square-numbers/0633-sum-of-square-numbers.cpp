class Solution {
public:
    bool judgeSquareSum(int c) {
long a = 0;
        long b = (int) sqrt(c);
        while (a <= b) {
            long sum = a * a + b * b;
            if (sum == c) {
                return true;
            } else if (sum < c) {
                a++;
            } else {
                b--;
            }
        }
        return false;
    }
};