class Solution {
public:
    int minMoves(long long target, int maxDoubles) {
        long long count = 0;

        while (target != 1) {
            if (maxDoubles == 0) {
                return count+(target - 1);
            }
            if (maxDoubles != 0 && (target % 2 == 0)) {
                target = target / 2;
                maxDoubles--;
                count++;
            } else {
                target = target - 1;
                count++;
            }
        }
        return count;
    }
};