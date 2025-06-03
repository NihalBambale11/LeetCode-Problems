class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies,
                   vector<vector<int>>& keys,
                   vector<vector<int>>& containedBoxes,
                   vector<int>& initialBoxes) {
        int candy = 0;
        int n = status.size();
        vector<bool> boxes(n, false);
        vector<bool> areKeys(n, false);
        vector<bool> opened(n, false);

        bool flag = true;

        for (int box : initialBoxes)
            boxes[box] = true;

        while (flag) {
            flag = false;

            for (int i = 0; i < n; i++) {
                if (boxes[i] && !opened[i] && (status[i] == 1 || areKeys[i])) {
                    opened[i] = true;
                    candy = candy + candies[i];
                    flag = true;

                    for (int x : keys[i]) {
                        areKeys[x] = true;
                    }
                    for (int y : containedBoxes[i]) {
                        boxes[y] = true;
                    }
                }
            }
        }
        return candy;
    }
};